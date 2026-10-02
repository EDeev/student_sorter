# Student Sorter

[Русский](README.md) · **English**

[![CI](https://github.com/EDeev/student_sorter/actions/workflows/ci.yml/badge.svg)](https://github.com/EDeev/student_sorter/actions/workflows/ci.yml)

A coursework Windows app for an admissions office: it keeps a list of applicants, sorts and filters it,
ranks programmes and produces a list of non-local applicants who need a dormitory.

**Status:** coursework (Ryazan State Radio Engineering University, 2024), completed

**Stack:** C++/CLI · Windows Forms (.NET Framework 4.8) · Visual Studio 2022 (MSVC v143) · course library RSREU.IO

## Features

- Adding an applicant: full name, address, benefits, exam score, programme
- Applicant table with column sorting and a programme filter
- Programmes ranked by popularity, local vs non-local applicants
- Chart: share of applicants with benefits
- Dormitory list: everyone registered outside Ryazan goes to `stud.txt` (format: [examples/stud.txt](examples/stud.txt), fictional names)
- The list is kept between runs in `applis.dat`

## Building

1. Open `InvestWinApp.sln` in Visual Studio 2022 with the "C++/CLI support" component.
2. Put the course library `RSREU.IO.dll` into `InvestWinApp/x64/Debug/` (it is not in the repository; it
   was provided by the course).
3. Build the x64 configuration.

> [!NOTE]
> Without `RSREU.IO.dll` the project does not build, so CI only checks that the sources are UTF-8.
> The solution is named `InvestWinApp` — that is how the project was created in Visual Studio.

## License

Coursework (Ryazan State Radio Engineering University, 2024). The code is open for study; there is no
separate license.

## Author

**Egor Deev** — [GitHub](https://github.com/EDeev) · [Telegram](https://t.me/DeevEgor) · [egor@deev.space](mailto:egor@deev.space)

---

<div align="center">
  <sub>⭐ If you find this project useful, give it a star on GitHub!</sub>
  <p><sub>Made with ❤️ — <a href="https://deev.space">deev.space</a></sub></p>
</div>
