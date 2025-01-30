/* Global Styles */
body {
    font-family: 'Montserrat', sans-serif;
    background-color: #f4f4f4; /* Soft background */
    color: #333; /* Dark text for readability */
    margin: 0;
    padding: 0;
}

h1, h2, h3, h4 {
    font-family: 'Playfair Display', serif;
    color: #7d3c98; /* Brand color for headings */
}

p, a {
    color: #333; /* Default text color */
    line-height: 1.6;
    font-size: 1rem;
}

a {
    text-decoration: none;
}

header {
    background-color: #fff;
    padding: 20px;
    box-shadow: 0 4px 8px rgba(0, 0, 0, 0.1); /* Subtle shadow for luxury feel */
}

header .logo h1 {
    font-size: 2rem;
    margin: 0;
    color: #7d3c98;
}

header .logo p {
    font-size: 1rem;
    margin: 0;
    color: #333;
}

header .nav {
    display: flex;
    justify-content: space-around;
    margin-top: 20px;
}

header .nav a {
    font-weight: 600;
    color: #333;
    transition: color 0.3s ease;
}

header .nav a:hover {
    color: #7d3c98; /* Luxury hover effect */
}

.hero {
    background-image: url('images/hero.jpg');
    background-size: cover;
    background-position: center;
    color: #fff;
    padding: 100px 0;
    text-align: center;
}

.hero-text h1 {
    font-size: 3rem;
    margin-bottom: 10px;
}

.hero-text p {
    font-size: 1.5rem;
}

.gallery {
    padding: 50px 20px;
    text-align: center;
}

.gallery h2 {
    font-size: 2rem;
    margin-bottom: 20px;
}

.grid {
    display: grid;
    grid-template-columns: repeat(auto-fill, minmax(300px, 1fr));
    gap: 20px;
}

.gallery-img {
    width: 100%;
    border-radius: 10px;
    transition: transform 0.3s ease;
}

.gallery-img:hover {
    transform: scale(1.05);
}

.cta {
    background-color: #7d3c98;
    color: #fff;
    padding: 50px 20px;
    text-align: center;
}

.cta h2 {
    font-size: 2rem;
    margin-bottom: 20px;
}

.cta p {
    font-size: 1.2rem;
}

.cta .btn {
    background-color: #fff;
    color: #7d3c98;
    padding: 10px 20px;
    text-transform: uppercase;
    font-weight: bold;
    border: none;
    border-radius: 5px;
    cursor: pointer;
    text-decoration: none;
    font-size: 1rem;
    transition: background-color 0.3s ease;
}

.cta .btn:hover {
    background-color: #7d3c98;
    color: #fff;
}

footer {
    background-color: #333;
    color: #fff;
    padding: 20px;
    text-align: center;
}

footer p {
    margin: 0;
}

.blog .blog-post {
    background-color: #fff;
    padding: 20px;
    margin-bottom: 20px;
    border-radius: 8px;
    box-shadow: 0 4px 8px rgba(0, 0, 0, 0.1);
}

.blog .blog-post h3 {
    font-size: 1.8rem;
    margin-bottom: 10px;
}

.blog .blog-post p {
    font-size: 1rem;
    margin-bottom: 20px;
}

.blog .blog-post a {
    color: #7d3c98;
    font-weight: 600;
}

.about {
    padding: 50px 20px;
    text-align: center;
}

.about h2 {
    font-size: 2rem;
    margin-bottom: 20px;
}

.about h3 {
    font-size: 1.5rem;
    margin-top: 20px;
}

.contact {
    padding: 50px 20px;
    text-align: center;
}

.contact h2 {
    font-size: 2rem;
    margin-bottom: 20px;
}

.contact p {
    font-size: 1.2rem;
}

.contact a {
    font-weight: 600;
}

.contact strong {
    font-weight: bold;
}

footer {
    background-color: #333;
    color: #fff;
    padding: 20px;
    text-align: center;
}

footer p {
    margin: 0;
}

@media (max-width: 768px) {
    header .nav {
        flex-direction: column;
        align-items: center;
    }

    .grid {
        grid-template-columns: 1fr;
    }

    .cta h2 {
        font-size: 1.8rem;
    }
}
