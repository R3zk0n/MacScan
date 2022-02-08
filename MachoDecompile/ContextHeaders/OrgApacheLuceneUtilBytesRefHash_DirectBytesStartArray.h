// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILBYTESREFHASH_DIRECTBYTESSTARTARRAY_H
#define ORGAPACHELUCENEUTILBYTESREFHASH_DIRECTBYTESSTARTARRAY_H

@class BytesStartArray;


#import "IOSIntArray.h"
#import "OrgApacheLuceneUtilCounter.h"

@interface OrgApacheLuceneUtilBytesRefHash_DirectBytesStartArray : BytesStartArray {
    int initSize_;
    IOSIntArray *bytesStart_;
    OrgApacheLuceneUtilCounter *bytesUsed_;
}




-(id)initWithInt:(int)arg0 withOrgApacheLuceneUtilCounter:(id)arg1 ;
-(id)initWithInt:(int)arg0 ;
-(id)clear;
-(id)grow;
-(id)init__;
-(id)bytesUsed;
-(void)dealloc;


@end


#endif