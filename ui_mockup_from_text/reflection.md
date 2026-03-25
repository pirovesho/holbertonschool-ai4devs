# Project Reflection: Developing ExpenseMate with AI

## 1. Where AI Helped Most
The AI agent was most effective as an **architectural accelerator**. In the early stages of ExpenseMate, the AI's ability to instantly generate complex boilerplate—such as the relational schema (ER Diagrams) and the initial FastAPI project structure—saved hours of manual setup. 

Specifically, the AI excelled at:
* **Edge Case Identification:** It suggested the dual-date system (`expense_date` vs. `created_date`) which I had initially overlooked, ensuring the platform had a built-in audit trail.
* **Documentation scaffolding:** It transformed raw ideas into structured Markdown files (`project_brief.md`, `product_scope.md`) that now serve as a professional "Source of Truth" for the entire repository.

## 2. Where AI Struggled
The primary struggle for the AI was **contextual persistence** and **financial precision**. Despite being told in the brief to use `Decimal` types for currency, the AI frequently defaulted to `Float` in code snippets, which is a significant risk in a FinTech application.

Furthermore, the AI occasionally suffered from "Feature Creep." It would often attempt to suggest "Should Have" features (like OCR receipt scanning) while the "Must Have" core logic (like the junction table for splits) was still incomplete. This required constant manual correction and strict adherence to the `product_scope.md`.

## 3. How Iterations Improved the Design
The iterative process was a "refining fire." In **Iteration 1**, the design was functional but lacked accessibility. By applying the **UI Evaluation Heuristics**, I was able to give the AI specific feedback regarding color-blindness and visual hierarchy.

By **Iteration 3**, the results were vastly superior. Instead of just "a list of names," the AI produced a prioritized dashboard where the most important information (Net Balance) was visually dominant. Each loop through the `prompt_log.md` allowed me to tighten the constraints, moving from "Make a list" to "Make a vertical, mobile-responsive list with high-contrast buttons."

## 4. Lessons Learned in AI-UI Workflows
The most important lesson learned is that **AI is a co-pilot, not an autopilot.** * **The "Seed" is Everything:** The quality of the code is directly proportional to the quality of the "Concept Folder." If the AI has a `data_preprocessing.md` to reference, it makes fewer logic errors.
* **Constraint-Driven Development:** Explicitly telling an AI what *not* to do is just as important as telling it what *to* do. 
* **Verification is Mandatory:** Even the most sophisticated AI will take mathematical shortcuts. A human must always verify the relational logic between tables like `Expense` and `Balance` to ensure the "Settle Up" math remains perfect.

In conclusion, using AI in a UI/UX workflow is less about "generating" and more about "curating and refining."