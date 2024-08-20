import path from 'path'
import type { SourceFile } from './SourceFile.js'

type Comment = '///' | '#'

export function createFileMetadataString(
  filename: string,
  comment: Comment = '///'
): string {
  const now = new Date()
  return `
${comment}
${comment} ${filename}
${comment} ${now.toDateString()}
${comment} This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
${comment} https://github.com/mrousavy/nitro
${comment} Copyright © ${now.getFullYear()} Marc Rousavy @ Margelo
${comment}
`.trim()
}

export function toReferenceType(type: string): `const ${typeof type}&` {
  return `const ${type}&`
}

export function escapeCppName(string: string): string {
  // Replace non-alphanumeric characters with underscores
  let escapedStr = string.replace(/[^a-zA-Z0-9_]/g, '_')

  // Ensure the first character is a letter or underscore
  if (!/^[a-zA-Z_]/.test(escapedStr)) {
    escapedStr = '_' + escapedStr
  }

  return escapedStr
}

export function isNotDuplicate<T>(item: T, index: number, array: T[]): boolean {
  return array.indexOf(item) === index
}

export function isCppFile(file: SourceFile): boolean {
  return file.name.endsWith('cpp') || file.name.endsWith('c')
}

export function getRelativeDirectory(file: SourceFile): string {
  return path.join(
    '..',
    'nitrogen',
    'generated',
    file.platform,
    file.language,
    ...file.subdirectory,
    file.name
  )
}
