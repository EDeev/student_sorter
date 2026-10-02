# Student Sorter

[Русский](README.md) · **English**

[![CI](https://github.com/EDeev/student_sorter/actions/workflows/ci.yml/badge.svg)](https://github.com/EDeev/student_sorter/actions/workflows/ci.yml)

A coursework Windows app for an admissions office: it keeps a list of applicants, sorts and filters it,
ranks programmes and produces a list of non-local applicants who need a dormitory.

**Status:** coursework (Ryazan State Radio Engineering University, 2024), completed

**Stack:** C++/CLI · Windows Forms (.NET Framework 4.8) · Visual Studio 2022 (MSVC v143) · course library RSREU.IO

## Features

- **Applicant table** with sorting by any field (click a column header) and a programme filter
- **Adding an applicant** in a separate form with input validation
- **Dormitory need** is determined from the registered address: everyone registered outside Ryazan goes
  to the `stud.txt` report (format: [examples/stud.txt](examples/stud.txt), fictional names)
- **Statistics:** programmes ranked by popularity, local vs non-local applicants, a chart of the share
  of applicants with benefits
- **Autosave:** the list is kept in `applis.dat` (serialized with the course library RSREU.IO)

An applicant is the `Applicant` struct in `config.h`: surname, name, patronymic, registered address,
benefit, exam score, programme.

## Building

Requires Windows 10/11, Visual Studio 2019 or 2022 with MSVC v143 tools and C++/CLI support, and
.NET Framework 4.8.

1. Open `InvestWinApp.sln`.
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
