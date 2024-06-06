# 🏓ft_transcendence: transcend into web 🏓

### 🔍 Why ft_transcendence:
- It is currently the last project at 42Heilbronn 
- We were five people working on it for circa 3 months
- Teammates: [<a href="https://github.com/lakner" target="_blank">lakner</a>], [<a href="https://github.com/albert2804" target="_blank">albert2804</a>], [<a href="https://github.com/Kathinka42" target="_blank">Kathinka42</a>], [<a href="https://github.com/Tilmanfs95" target="_blank">Tilmanfs95</a>]
-

## Project setup

 - You have to set the environment variables in the .env file.

## Project run

Start all containers:
```
make
```
connect via `https://localhost/`

### Development

- Set the environment variables in the .env file:
```
NODE_ENV=development
DJANGO_SETTINGS_MODULE=backend.settings.development
```
- The development frontend server updates the changes automatically.
- The backend server needs to be restarted to update the changes.

### Production

- Set the environment variables in the .env file:
```
NODE_ENV=production
DJANGO_SETTINGS_MODULE=backend.settings.production
```
- To update the frontend changes, you need to run 'npm run build' and restart the frontend server.
- The backend server needs to be restarted to update the changes.