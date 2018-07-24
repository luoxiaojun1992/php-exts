
#ifdef HAVE_CONFIG_H
#include "../ext_config.h"
#endif

#include <php.h>
#include "../php_ext.h"
#include "../ext.h"

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/main.h"
#include "kernel/memory.h"
#include "kernel/string.h"
#include "kernel/fcall.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Utils_Validator) {

	ZEPHIR_REGISTER_CLASS(Utils, Validator, utils, validator, utils_validator_method_entry, 0);

	return SUCCESS;

}

PHP_METHOD(Utils_Validator, isInteger) {

	zend_bool _0;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *num, num_sub, _1, _2, _3;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&num_sub);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &num);



	_0 = Z_TYPE_P(num) == IS_LONG;
	if (!(_0)) {
		ZEPHIR_INIT_VAR(&_1);
		ZEPHIR_INIT_VAR(&_2);
		ZVAL_STRING(&_2, "-");
		zephir_fast_trim(&_1, num, &_2, ZEPHIR_TRIM_LEFT TSRMLS_CC);
		ZEPHIR_CALL_FUNCTION(&_3, "ctype_digit", NULL, 3, &_1);
		zephir_check_call_status();
		_0 = zephir_is_true(&_3);
	}
	RETURN_MM_BOOL(_0);

}

