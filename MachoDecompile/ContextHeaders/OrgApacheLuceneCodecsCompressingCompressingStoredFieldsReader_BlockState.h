// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENECODECSCOMPRESSINGCOMPRESSINGSTOREDFIELDSREADER_BLOCKSTATE_H
#define ORGAPACHELUCENECODECSCOMPRESSINGCOMPRESSINGSTOREDFIELDSREADER_BLOCKSTATE_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneCodecsCompressingCompressingStoredFieldsReader.h"
#import "IOSIntArray.h"
#import "OrgApacheLuceneUtilBytesRef.h"

@interface OrgApacheLuceneCodecsCompressingCompressingStoredFieldsReader_BlockState : NSObject {
    OrgApacheLuceneCodecsCompressingCompressingStoredFieldsReader *this$0_;
    int docBase_;
    int chunkDocs_;
    BOOL sliced_;
    IOSIntArray *offsets_;
    IOSIntArray *numStoredFields_;
    NSInteger startPointer_;
    OrgApacheLuceneUtilBytesRef *spare_;
    OrgApacheLuceneUtilBytesRef *bytes_;
}




-(BOOL)containsWithInt:(int)arg0 ;
-(void)resetWithInt:(int)arg0 ;
-(void)doResetWithInt:(int)arg0 ;
-(id)documentWithInt:(int)arg0 ;
-(id)initWithOrgApacheLuceneCodecsCompressingCompressingStoredFieldsReader:(id)arg0 ;
-(void)dealloc;
-(void)__javaClone;


@end


#endif