/* Macros */


bool is_shift_lock_active = false; 

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case LOCK_SHIFT:
      if (record->event.pressed) {
        if (!is_shift_lock_active) {
          is_shift_lock_active = true;
          register_code(KC_LSFT);
        }
        else{
          is_shift_lock_active = false;
          unregister_code(KC_LSFT);
        }         
      } 
      break;

      case LARTSEY_A:
      if (record->event.pressed) {
         SEND_STRING("a");
      } 
      break;
      
      case LARTSEY_R:
      if (record->event.pressed) {
         SEND_STRING("r");
      } 
      break;
      case LARTSEY_T:
      if (record->event.pressed) {
         SEND_STRING("t");
      } 
      break;
      case LARTSEY_S:
      if (record->event.pressed) {
         SEND_STRING("s");
      } 
      break;
      case LARTSEY_E:
      if (record->event.pressed) {
         SEND_STRING("e");
      } 
      break;
      case LARTSEY_Y:
      if (record->event.pressed) {
         SEND_STRING("y");
      } 
      break;
      case LARTSEY_I:
      if (record->event.pressed) {
         SEND_STRING("i");
      } 
      break;
      case LARTSEY_O:
      if (record->event.pressed) {
         SEND_STRING("o");
      } 
      break;

      
       
        
	
  }
  return true;
};

