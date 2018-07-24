
extern zend_class_entry *utils_pagination_ce;

ZEPHIR_INIT_CLASS(Utils_Pagination);

PHP_METHOD(Utils_Pagination, __construct);
PHP_METHOD(Utils_Pagination, calculate);
PHP_METHOD(Utils_Pagination, fix);
PHP_METHOD(Utils_Pagination, setTotal);
PHP_METHOD(Utils_Pagination, getTotal);
PHP_METHOD(Utils_Pagination, getPerPage);
PHP_METHOD(Utils_Pagination, getPageNum);
PHP_METHOD(Utils_Pagination, getOffset);
PHP_METHOD(Utils_Pagination, getPageTotal);
PHP_METHOD(Utils_Pagination, render);

ZEND_BEGIN_ARG_INFO_EX(arginfo_utils_pagination___construct, 0, 0, 2)
	ZEND_ARG_INFO(0, total)
	ZEND_ARG_INFO(0, per_page)
	ZEND_ARG_INFO(0, page_num)
	ZEND_ARG_INFO(0, render)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_utils_pagination_fix, 0, 0, 1)
	ZEND_ARG_INFO(0, current_page_count)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_utils_pagination_settotal, 0, 0, 1)
	ZEND_ARG_INFO(0, total)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(utils_pagination_method_entry) {
	PHP_ME(Utils_Pagination, __construct, arginfo_utils_pagination___construct, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(Utils_Pagination, calculate, NULL, ZEND_ACC_PROTECTED)
	PHP_ME(Utils_Pagination, fix, arginfo_utils_pagination_fix, ZEND_ACC_PUBLIC)
	PHP_ME(Utils_Pagination, setTotal, arginfo_utils_pagination_settotal, ZEND_ACC_PUBLIC)
	PHP_ME(Utils_Pagination, getTotal, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Utils_Pagination, getPerPage, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Utils_Pagination, getPageNum, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Utils_Pagination, getOffset, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Utils_Pagination, getPageTotal, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Utils_Pagination, render, NULL, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
