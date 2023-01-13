pub fn hypotenuse(a: f64, b: f64) -> f64 {
    a.hypot(b)
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn sanity_check() {
        let res = hypotenuse(3f64, 4f64);
        assert_eq!(res, 5f64);
    }
}
