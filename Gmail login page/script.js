// Simulated user credentials
const mockCredentials = {
    email: "user@example.com",
    password: "password123"
};

document.getElementById('loginForm').addEventListener('submit', function (event) {
    event.preventDefault(); // Prevent form submission

    const email = document.getElementById('email').value.trim();
    const password = document.getElementById('password').value.trim();

    // Validate credentials
    if (email === '' || password === '') {
        alert('Please fill in all fields.');
        return;
    }

    if (email !== mockCredentials.email || password !== mockCredentials.password) {
        alert('Incorrect email or password.');
        return;
    }

    // Redirect to Gmail if credentials match
    alert('Redirecting to Gmail...');
    window.open("https://mail.google.com", "_blank"); // Open Gmail in a new tab
});

document.getElementById('signupButton').addEventListener('click', function () {
    alert('Redirecting to Sign Up...');
    window.open("https://accounts.google.com/signup", "_blank"); // Open Google Sign-Up in a new tab
});
