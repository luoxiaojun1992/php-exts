
extern zend_class_entry *utils_validator_ce;

ZEPHIR_INIT_CLASS(Utils_Validator);

PHP_METHOD(Utils_Validator, isInteger);

ZEND_BEGIN_ARG_INFO_EX(arginfo_utils_validator_isinteger, 0, 0, 1)
	ZEND_ARG_INFO(0, num)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(utils_validator_method_entry) {
	PHP_ME(Utils_Validator, isInteger, arginfo_utils_validator_isinteger, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
