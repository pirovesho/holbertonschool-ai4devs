# Benchmark Tasks

## Task 1 - Skill Card UI Component
**Requirements**: Create a reusable React component using Tailwind CSS to display a skill offered by a user on the main feed.
**Inputs**: React props: `giverName` (string), `skillTitle` (string), `rating` (number), `location` (string).
**Outputs**: A rendered UI card element containing the user's details and a "Request Session" button.
**Acceptance Criteria**:
- Successfully renders all provided props.
- Button triggers an empty `onClick` handler.
- Uses Tailwind utility classes for padding, borders, and responsive design.

## Task 2 - Point Escrow Validation Logic
**Requirements**: Write a JavaScript function that validates whether a user can request a session, preventing them from spending points they don't have.
**Inputs**: `userBalance` (number), `requestedSessionCost` (number - defaults to 1).
**Outputs**: A boolean (`true` if valid, `false` if invalid) and a status message string.
**Acceptance Criteria**:
- Returns `true` and "Success" if `userBalance` is greater than or equal to `requestedSessionCost`.
- Returns `false` and "Insufficient points" if `userBalance` is less than `requestedSessionCost`.
- Handles edge cases (e.g., negative balance returns `false`).

## Task 3 - Search Feed Filtering Function
**Requirements**: Implement a JavaScript function to filter an array of user skill profiles based on search criteria.
**Inputs**: An array of objects (e.g., `[{ id: 1, subject: "Python", location: "Online" }]`), a `searchSubject` (string), and a `filterLocation` (string).
**Outputs**: A filtered array of objects matching the criteria.
**Acceptance Criteria**:
- Subject matching must be case-insensitive (e.g., "python" matches "Python").
- If `filterLocation` is provided, it must exactly match the object's location.
- Returns an empty array if no profiles match the combined criteria.