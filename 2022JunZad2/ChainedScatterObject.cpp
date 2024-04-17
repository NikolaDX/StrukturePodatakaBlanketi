#include "ChainedScatterObject.h"


ChainedScatterObject::ChainedScatterObject(ChainedScatterObject const& obj): ScatterObject(obj)
{
	next = obj.next;
	status = obj.status;
}

ChainedScatterObject& ChainedScatterObject::operator = (ChainedScatterObject const& obj)
{
	if (this != &obj)
	{
		(ScatterObject&)(*this) = obj;
		next = obj.next;
		status = obj.status;
	}
	return *this;
}

void ChainedScatterObject::print()
{
	if (getKey() != NULL)
	{
		cout << getKey();
	}
	if (getRecord() != NULL)
	{
		cout << "|" << getRecord();
	}
	cout << "|" << next << endl;
}