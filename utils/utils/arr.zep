namespace Utils;

class Arr
{
	public static function exists(array arr, var key)
    {
        if is_array(key) {
            var sub_key;
            for sub_key in key {
                if !is_array(arr) {
                    return false;
                }

                if array_key_exists(sub_key, arr) {
                    let arr = arr[sub_key];
                } else {
                    return false;
                }
            }

            return true;
        } else {
            return array_key_exists(key, arr);
        }
    }
}

