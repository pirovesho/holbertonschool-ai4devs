# Workflow Baseline

## 1. Current IDE Setup
* **Primary IDE:** VS Code (Visual Studio Code)
* **Language Support:** Pylance (Python), ES7+ React/Redux/React-Native snippets.
* **Formatting & Linting:** Prettier, ESLint, Black (Python formatter).
* **Database Tools:** SQLTools (for PostgreSQL management).
* **Extensions:** * **Docker:** For containerized environment management.
    * **Thunder Client:** For API endpoint testing (Postman alternative).
    * **GitLens:** For deep git history and blame tracking.

## 2. Pain Points
1.  **Context Switching:** Constant toggling between the Browser (FastAPI docs), Terminal, and Code Editor to verify syntax and endpoint structures.
2.  **Boilerplate Fatigue:** Manually writing repetitive SQLAlchemy models and Pydantic schemas for every new database entity.
3.  **State Management Complexity:** Manually tracking complex User/Group states in React, which often leads to "prop drilling" errors that are slow to debug.

## 3. Productivity Metrics
* **Avg Task Completion:** 120 min (From backend endpoint to frontend integration).
* **Bug Fix Turnaround:** 3h (Finding the root cause in the handshake between FastAPI and React).
* **Weekly Commits:** ~15–20 (Focused mainly on feature milestones).

## 4. Workflow Strategy
* **Manual Coding:** 80% of logic is written from scratch.
* **Documentation:** Hand-written in Markdown after the feature is complete.
* **Testing:** Manual verification via Thunder Client and Browser refreshes.