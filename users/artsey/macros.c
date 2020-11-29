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

      case LA_A:
      if (record->event.pressed) {
         SEND_STRING("a");
      } 
      break;
      
      case LA_R:
      if (record->event.pressed) {
         SEND_STRING("r");
      } 
      break;
      case LA_T:
      if (record->event.pressed) {
         SEND_STRING("t");
      } 
      break;
      case LA_S:
      if (record->event.pressed) {
         SEND_STRING("s");
      } 
      break;
      case LA_E:
      if (record->event.pressed) {
         SEND_STRING("e");
      } 
      break;
      case LA_Y:
      if (record->event.pressed) {
         SEND_STRING("y");
      } 
      break;
      case LA_I:
      if (record->event.pressed) {
         SEND_STRING("i");
      } 
      break;
      case LA_O:
      if (record->event.pressed) {
         SEND_STRING("o");
      } 
      break;

      
       
        
	
  }
  return true;
};

