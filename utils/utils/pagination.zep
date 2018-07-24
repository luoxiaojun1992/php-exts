namespace Utils;

/**
 * Class Pagination
 *
 * {@inheritdoc}
 *
 * Lightweight Pagination
 *
 * @package Utils
 */
class Pagination
{
    protected total;
    protected per_page;
    protected page_num = 1;
    protected offset;
    protected page_total;
    /**
     * @var callable|null $render
     */
    protected render;
    public function __construct(total, per_page, page_num = 1, render = null) -> void
    {
        let this->total = total;
        let this->per_page = per_page;
        let this->page_num = page_num;
        let this->render = render;
        this->calculate();
    }
    
    /**
     * Calculate pagination params
     */
    protected function calculate() -> void
    {
        let this->page_total =  intval(ceil(this->total / this->per_page));
        let this->offset =  (this->page_num - 1) * this->per_page;
    }
    
    /**
     * Fix pagination params
     *
     * @param  $current_page_count
     * @return $this
     */
    public function fix(int current_page_count)
    {
        var current_total;
    
        let current_total =  (this->page_num - 1) * this->per_page + current_page_count;
        if current_total > this->total {
            if current_page_count > 0 {
                let this->total = current_total;
                this->calculate();
            }
        } else {
            if current_page_count < this->per_page {
                if current_total < this->total {
                    let this->total = current_total;
                    this->calculate();
                }
            }
        }
        return this;
    }
    
    /**
     * @param int $total
     * @return $this
     */
    public function setTotal(int total)
    {
        let this->total = total;
        return this;
    }
    
    /**
     * @return mixed
     */
    public function getTotal() -> int
    {
        return this->total;
    }
    
    /**
     * @return mixed
     */
    public function getPerPage() -> int
    {
        return this->per_page;
    }
    
    /**
     * @return int
     */
    public function getPageNum() -> int
    {
        return this->page_num;
    }
    
    /**
     * @return mixed
     */
    public function getOffset() -> int
    {
        return this->offset;
    }
    
    /**
     * @return mixed
     */
    public function getPageTotal() -> int
    {
        return this->page_total;
    }
    
    /**
     * Render pagination ui
     *
     * @return mixed|null
     */
    public function render()
    {
        var tmpArraydfcb2d5180223c5cbaefb9740c6421d4;
    
        if !(is_null(this->render)) {
            let tmpArraydfcb2d5180223c5cbaefb9740c6421d4 = ["total" : this->total, "per_page" : this->per_page, "page_num" : this->page_num, "page_total" : this->page_total, "next_page" :  this->page_num < this->page_total ? this->page_num + 1  : this->page_total, "prev_page" :  this->page_num > 1 ? this->page_num - 1  : 1];
            return call_user_func_array(this->render, tmpArraydfcb2d5180223c5cbaefb9740c6421d4);
        }
        return null;
    }

}
