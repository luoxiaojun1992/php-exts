
extern zend_class_entry *utils_arr_ce;

ZEPHIR_INIT_CLASS(Utils_Arr);

PHP_METHOD(Utils_Arr, exists);

ZEND_BEGIN_ARG_INFO_EX(arginfo_utils_arr_exists, 0, 0, 2)
	ZEND_ARG_ARRAY_INFO(0, arr, 0)
	ZEND_ARG_INFO(0, key)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(utils_arr_method_entry) {
	PHP_ME(Utils_Arr, exists, arginfo_utils_arr_exists, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
