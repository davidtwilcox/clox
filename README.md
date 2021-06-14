<!-- PROJECT LOGO -->
<p align="center">
    <h3 align="center">clox</h3>
  <p align="center">
    C implementation of the Lox programming language
    <br />
    <a href="https://github.com/davidtwilcox/clox"><strong>Explore the docs »</strong></a>
    <br />
    <br />
    <a href="https://github.com/davidtwilcox/clox/issues">Report Bug</a>
    ·
    <a href="https://github.com/davidtwilcox/clox/issues">Request Feature</a>
  </p>
</p>

<!-- TABLE OF CONTENTS -->
## Table of Contents

* [About the Project](#about-the-project)
    * [Built With](#built-with)
* [Getting Started](#getting-started)
    * [Prerequisites](#prerequisites)
    * [Installation](#installation)
* [Usage](#usage)
* [Roadmap](#roadmap)
* [Contributing](#contributing)
* [License](#license)
* [Contact](#contact)
* [Acknowledgements](#acknowledgements)



<!-- ABOUT THE PROJECT -->
## About The Project
This is (so far) a direct C implementation
of clox in Section III of Bob Nystrom's site [Crafting Interpreters](https://craftinginterpreters.com/).

As the project grows, a standard library and new language features will be added. Expect this
implementation to deviate from the original Lox specification in the future.


### Built With

C and the C standard library.


<!-- GETTING STARTED -->
## Getting Started

To get a local copy up and running follow these simple steps. The instructions assume you are on a
Linux or Unix-like system. I can verify this will work on macOS as well.

### Prerequisites

None other than a working C compiler and C standard library for your system.

### Installation

1. Clone the repo
```sh
git clone https://github.com/davidtwilcox/clox.git
```
2. Create your build files (run these commands in the clox root directory)
```shell script
$ cmake -DCMAKE_BUILD_TYPE=Debug -G "YOUR_PREFERRED_IDE" PATH_TO_SOURCE
```



<!-- USAGE EXAMPLES -->
## Usage

For now, reference the Lox grammar [appendix](https://craftinginterpreters.com/appendix-i.html) on the
Crafting Interpreters site. In the future, as clox adds new features and forks from the original
language specification, a full grammar reference will be included here.



<!-- ROADMAP -->
## Roadmap

See the [open issues](https://github.com/davidtwilcox/clox/issues) for a list of proposed features
(and known issues).

* Add a standard library to enable more functionality
* Implement new language features


<!-- CONTRIBUTING -->
## Contributing

Contributions are what make the open source community such an amazing place to be learn, inspire, and create. Any contributions you make are **greatly appreciated**.

1. Fork the Project
2. Create your Feature Branch (`git checkout -b feature/AmazingFeature`)
3. Commit your Changes (`git commit -m 'Add some AmazingFeature'`)
4. Push to the Branch (`git push origin feature/AmazingFeature`)
5. Open a Pull Request



<!-- LICENSE -->
## License

Distributed under the MIT License. See `LICENSE` for more information.



<!-- CONTACT -->
## Contact

David Wilcox - [@davidtwilcox](https://twitter.com/davidtwilcox) - david@dtwil.co

Project Link: [https://github.com/davidtwilcox/clox](https://github.com/davidtwilcox/clox)



<!-- ACKNOWLEDGEMENTS -->
## Acknowledgements

* [Bob Nystrom](https://twitter.com/munificentbob) - Author of [Crafting Interpreters](https://craftinginterpreters.com/)

<!-- MARKDOWN LINKS & IMAGES -->
<!-- https://www.markdownguide.org/basic-syntax/#reference-style-links -->
[contributors-shield]: https://img.shields.io/github/contributors/davidtwilcox/repo.svg?style=flat-square
[contributors-url]: https://github.com/davidtwilcox/repo/graphs/contributors
[forks-shield]: https://img.shields.io/github/forks/davidtwilcox/repo.svg?style=flat-square
[forks-url]: https://github.com/davidtwilcox/repo/network/members
[stars-shield]: https://img.shields.io/github/stars/davidtwilcox/repo.svg?style=flat-square
[stars-url]: https://github.com/davidtwilcox/repo/stargazers
[issues-shield]: https://img.shields.io/github/issues/davidtwilcox/repo.svg?style=flat-square
[issues-url]: https://github.com/davidtwilcox/repo/issues
[license-shield]: https://img.shields.io/github/license/davidtwilcox/repo.svg?style=flat-square
[license-url]: https://github.com/davidtwilcox/repo/blob/master/LICENSE.txt
[linkedin-shield]: https://img.shields.io/badge/-LinkedIn-black.svg?style=flat-square&logo=linkedin&colorB=555
[linkedin-url]: https://linkedin.com/in/davidtwilcox
[product-screenshot]: images/screenshot.png
