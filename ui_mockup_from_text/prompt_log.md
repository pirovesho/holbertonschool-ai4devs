# Prompt Log: ExpenseMate Development

## 1. Purpose of this Document
This log tracks the interaction between the developer and the AI Agent. By recording the prompts and their outcomes, we identify the most effective ways to trigger high-quality code generation and avoid recurring logic errors.

---

## 2. Iteration History

### ## Iteration 1
**Prompt**: "Create the FastAPI User model with email and password."  
**Change**: Generated a basic SQLAlchemy model but used a plain string for the password field.  
**Notes on effectiveness**: Ineffective for security. The AI ignored the "Bcrypt" requirement from the `project_brief.md`.  
**Next Step**: Re-run with the constraint: "Use Passlib with Bcrypt for password hashing logic."

### ## Iteration 2
**Prompt**: "Generate the Expense table and the logic to split a bill between four people."  
**Change**: Produced a working table, but used 'Float' for the amount and did not create a junction table.  
**Notes on effectiveness**: Poor. AI took a "shortcut" that violates the relational integrity defined in `data_preprocessing.md`.  
**Next Step**: Explicitly prompt for a "Many-to-Many junction table named `Expense_Participant` using Decimals."

### ## Iteration 3
**Prompt**: "Design the React Group Dashboard showing the list of expenses."  
**Change**: Created a clean vertical list with clear headings. The visual hierarchy score is high.  
**Notes on effectiveness**: Very effective. Following the `ui_evaluation.md` notes helped the AI prioritize the "Add Expense" button.  
**Next Step**: Refine the list to include the `category` tags as defined in the ER Diagram.

---

## 3. Best Practices for Future Prompts
* **Reference the Docs:** Always start a complex prompt with: "Referencing `data_preprocessing.md` and `project_brief.md`, please..."
* **Constraint-First:** State technical constraints (UUIDs, Decimals, JWT) at the beginning of the prompt.
* **Atomic Requests:** Ask for one table or one component at a time to ensure the AI doesn't skip validation logic.

## 4. Pending Iterations
- [ ] Authentication Flow (Frontend + Backend Handshake).
- [ ] Group Invite Code Generation Logic.
- [ ] Balance Calculation Trigger/Service.