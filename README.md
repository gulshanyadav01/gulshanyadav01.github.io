# gulshanyadav.com — Personal Website

Personal website of Gulshan Yadav — entrepreneur & cofounder of [rhobots.ai](https://rhobots.ai).

Pure static site: HTML + CSS + vanilla JS. No build step, no dependencies.

## Run locally

```bash
python3 -m http.server 8000
# open http://localhost:8000
```

## Before publishing — personalize

Search for `TODO: personalize` in `index.html`:

1. **Photo** — drop your portrait at `assets/photo.jpg` (square-ish, ~800×1000px). Until then, a "GY" monogram placeholder shows.
2. **Values line** in the About section.
3. **Venture stats** — replace "Trusted by enterprise teams" with real numbers when ready.
4. **Beyond work** — swap the interests for your real hobbies.

## Deploy to GitHub Pages

```bash
git init
git add .
git commit -m "Personal website"
# For a user site at https://gulshanyadav01.github.io:
git remote add origin git@github.com:gulshanyadav01/gulshanyadav01.github.io.git
git push -u origin main
```

Then on GitHub: **Settings → Pages → Source: Deploy from a branch → main / (root)**.
The site goes live at `https://gulshanyadav01.github.io` within a minute or two.
