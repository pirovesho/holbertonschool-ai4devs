# Reflection on Prompt Design

## Introduction
In this project, I developed a library of AI-assisted prompt templates to support developers in code quality, debugging, testing, and documentation tasks. The goal was to create structured, reusable prompts that could guide AI models to produce reliable, clear, and actionable outputs. Each template was tested with sample code or text, documenting the prompt used, input, AI output, and feedback. The library is categorized for easy reference, and each prompt includes key structural elements such as role, input placeholders, tone, and expected output definitions.

## Easy vs Hard Prompt Types
Some types of prompts were easier to generalize than others. For instance, **refactoring and style enforcement prompts** were straightforward because the tasks are concrete: the AI needs to produce readable code, enforce formatting, or improve naming conventions. The expected outputs are well-defined and measurable, making the prompts highly reusable across different programming languages or snippets. On the other hand, **error diagnosis and bug fix suggestion prompts** were more difficult to generalize. Errors vary widely in type and context, and the AI needs to reason about the problem and produce a solution without introducing new bugs. Creating placeholders that could capture both the code and the error or behavioral context required careful planning. Similarly, **unit test generation prompts** demanded clear instructions to ensure coverage of normal, edge, and negative cases, which is harder to standardize because test needs vary with each function.

## Key Elements
Three structural elements proved essential across all prompt types:

1. **Role**: Defining a role such as Senior Developer, Code Quality Reviewer, or Technical Documentation Specialist helped the AI adopt the right perspective and tone. This significantly improved output relevance and clarity, as the AI “acted” according to the assigned responsibility.
   
2. **Tone**: Explicit tone instructions, such as “write clearly and concisely” or “use professional comments,” ensured outputs were consistent and suitable for documentation, teaching, or collaboration purposes.
   
3. **Input Placeholders**: Placeholders like `[CODE_BLOCK]`, `[BUGGY_CODE]`, `[FUNCTION_OR_MODULE_CODE]`, or `[ERROR_MESSAGE_OR_DESCRIPTION]` were crucial for generalization. They allowed prompts to be reusable across different examples and programming languages without rewriting the instructions each time. They also guided the AI to focus on the specific input area.

These elements together created a predictable structure that improved the AI’s ability to interpret the task correctly.

## Impact on Output
Structured prompts had a clear impact on AI performance. For example, in the **refactoring prompt**, including the role and a `[CODE_BLOCK]` placeholder produced consistent improvements in code readability. Conversely, prompts without a defined role or placeholder sometimes yielded vague outputs, such as suggesting unrelated changes or failing to produce a structured result. In **style enforcement**, specifying expected output format and tone ensured the AI not only reformatted code but also preserved logic. In contrast, early versions of the **error diagnosis prompt** that lacked explicit error placeholders sometimes misidentified the source of issues or provided incomplete explanations.

Examples of success include:
- A Python refactoring prompt that clearly separated input, AI output, and expected output, leading to fully readable and properly formatted code.
- A comment generation prompt with role, placeholders, and expected output definition, which produced clear, concise annotations across multiple languages.

Examples of minor failures occurred when feedback fields or placeholders were missing, causing the AI to misinterpret the intended task, as initially seen in style enforcement and error diagnosis tests.

## Future Work
To further improve the prompt library, several enhancements could be implemented. First, creating **more granular categories** for specific languages or frameworks would improve generalization. Second, including **predefined examples and edge cases within placeholders** could help AI generate more robust outputs. Third, integrating **automated validation checks** in the library could flag prompts that produce inconsistent results or fail to meet the expected output format. Finally, standardizing a **template schema** for all prompts — including role, tone, input placeholders, expected output, and example feedback — would maximize reusability and reduce errors during testing or submission. Overall, these improvements would make the prompt library a more practical and reliable tool for AI-assisted development workflows.