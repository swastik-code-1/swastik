# Itachi Dev Portfolio

Full-stack cinematic developer portfolio built with Next.js, TypeScript, Tailwind CSS, React Three Fiber, Drei, Framer Motion, Prisma, and PostgreSQL.

## Development

```bash
npm install
cp .env.example .env
npm run db:generate
npm run db:push
npm run db:seed
npm run dev
```

## Production

Set `DATABASE_URL`, `ADMIN_USERNAME`, `ADMIN_PASSWORD`, `SESSION_SECRET`, and `NEXT_PUBLIC_SITE_URL` in the hosting provider's production environment.
