
extern zend_class_entry *utils_str_ce;

ZEPHIR_INIT_CLASS(Utils_Str);

PHP_METHOD(Utils_Str, length);

ZEND_BEGIN_ARG_INFO_EX(arginfo_utils_str_length, 0, 0, 2)
	ZEND_ARG_INFO(0, str)
	ZEND_ARG_INFO(0, encoding)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(utils_str_method_entry) {
	PHP_ME(Utils_Str, length, arginfo_utils_str_length, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
