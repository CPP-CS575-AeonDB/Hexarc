#include "stdafx.h"

CIndexStorageA::~CIndexStorageA(void) { }
bool CIndexStorageA::RemoveRow(const CRowKey &Key) { return false; }
bool CIndexStorageA::InsertRow(const CRowKey &Key, const CRowIndex &Data) { return false; }
bool CIndexStorageA::UpdateRow(const CRowKey &Key, const CRowIndex &Data) { return false; }
bool CIndexStorageA::HasRow(const CRowKey &Key) { return false; }
bool CIndexStorageA::HasTerm(const CString &sTerm) { return false; }
bool CIndexStorageA::GetLastIndexed(SEQUENCENUMBER *retRowId) { return false; }
bool CIndexStorageA::SetLastIndexed(SEQUENCENUMBER RowID) { return false; }
bool CIndexStorageA::Open(void) { return false; }
bool CIndexStorageA::Create(void) { return false; }
bool CIndexStorageA::Delete(void) { return false; }