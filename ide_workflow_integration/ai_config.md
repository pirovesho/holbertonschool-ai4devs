# AI Configuration & Workflow

## 1. Overview
This document outlines the specialized configuration for GitHub Copilot and Gemini 3 Flash to ensure code consistency across the ExpenseMate platform.

## 2. Environment Setup
* **Primary AI:** GitHub Copilot / Gemini 3 Flash
* **Contextual Awareness:** The AI is instructed to always reference the `/concept` folder before generating new logic.
* **Format:** Strict adherence to PEP8 (Python) and Airbnb Style Guide (React).

## 3. Specialized AI Workflows
### A. Automated Documentation Generator
The AI is configured to automatically generate Pydantic schemas from SQLAlchemy models. 
* **Trigger:** "Generate schema for model [ModelName]"

### B. Security-First Code Review
All authentication-related code must pass a specific AI security prompt.
* **Workflow:** Before committing, the code is passed to the AI with the prompt: *"Audit this for JWT best practices and SQL injection vulnerabilities."*

## 4. Language-Specific Rules
* **Python (FastAPI):** Must use `Decimal` for currency and `UUID` for IDs.
* **JavaScript (React):** Must use Functional Components and Tailwind CSS for styling.