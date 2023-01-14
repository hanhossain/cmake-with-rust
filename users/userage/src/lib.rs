#[no_mangle]
pub extern "C" fn get_user_age() -> i32 {
    123
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_get_user_age() {
        assert_eq!(get_user_age(), 123);
    }
}
