# UI Evaluation: ExpenseMate (mockups_v3)

## 1. Purpose of this Document
This document evaluates the User Interface design against established heuristic principles. It serves as a quality gate to ensure the React frontend matches the high logic standards defined in the `data_preprocessing.md`.

## 2. Evaluation Summary

| Heuristic Category | Score (1-5) | Key Notes |
| :--- | :---: | :--- |
| **Visual Hierarchy** | **4** | Primary "Add Expense" action is dominant. Group balances are clearly separated from transaction history. *Improvement:* Increase contrast for "Secondary" buttons (e.g., Cancel/Back). |
| **Flow & Learnability**| **5** | The path from "Dashboard" to "Logged Expense" is linear and intuitive. The "Join Group" flow via 6-digit code mirrors industry standards (Splitwise/Uber). |
| **Accessibility** | **3** | Color-coding (Green for "Owes You", Red for "You Owe") is clear but needs secondary icons (Arrow Up/Down) for color-blind users. Font weight on timestamps is slightly too light. |

---

## 3. Detailed Heuristic Analysis

### A. Visual Hierarchy (Scoring: 4/5)
* **Strengths:** The use of "Card" layouts for different groups allows users to scan their total financial position quickly. The "Total Balance" at the top of the dashboard uses a larger font size, correctly identifying it as the most important data point.
* **Weaknesses:** In the Expense List, the `expense_date` and `category` tag compete for attention. 
* **Action:** Dim the `category` tag background color to ensure the `amount` remains the visual anchor.

### B. Flow & Learnability (Scoring: 5/5)
* **Strengths:** The "Modular Monolith" logic is reflected in the UI; users move from Global (Dashboard) -> Local (Group) -> Atomic (Expense). This hierarchy is easy for new users to grasp without a tutorial.
* **Weaknesses:** None identified in current version.
* **Action:** Maintain the current 3-step navigation structure.

### C. Accessibility (Scoring: 3/5)
* **Strengths:** Buttons have large touch targets (minimum 44x44px), making the mobile web experience smooth.
* **Weaknesses:** The red/green debt indicators fail WCAG 2.1 color contrast guidelines for users with Protanopia. 
* **Action:** Add (+) and (-) symbols next to currency amounts and ensure the "Submit" button has a contrast ratio of at least 4.5:1 against the background.

---

## 4. Feature Prioritization for UI Fixes
1.  **High Priority:** Add icons to debt indicators (Accessibility).
2.  **Medium Priority:** Bold the "Payer Name" in the transaction feed (Visual Hierarchy).
3.  **Low Priority:** Implement "Dark Mode" toggle (Non-functional expectation).

## 5. Definition of UI Done
A screen is considered "UI Done" when it passes the contrast check and the user can complete the primary task (e.g., Settle Up) without clicking "Back" more than once.