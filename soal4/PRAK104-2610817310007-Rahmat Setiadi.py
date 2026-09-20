shoe_a_price = 400000
shoe_b_price = 350000

shoe_a_discounted = shoe_a_price - (shoe_a_price * 0.13)
shoe_b_discounted = shoe_b_price - (shoe_b_price * 0.21)

print(f"Harga sepatu A adalah {shoe_a_price}")
print(f"Harga sepatu B adalah {shoe_b_price}")
print(
    f"Sepatu A mendapat diskon 13% sehingga harganya menjadi {int(shoe_a_discounted)}"
)
print(
    f"Sepatu B mendapat diskon 21% sehingga harganya menjadi {int(shoe_b_discounted)}"
)
