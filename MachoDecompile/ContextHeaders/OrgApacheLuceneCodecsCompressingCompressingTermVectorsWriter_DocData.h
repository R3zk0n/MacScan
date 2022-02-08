// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENECODECSCOMPRESSINGCOMPRESSINGTERMVECTORSWRITER_DOCDATA_H
#define ORGAPACHELUCENECODECSCOMPRESSINGCOMPRESSINGTERMVECTORSWRITER_DOCDATA_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneCodecsCompressingCompressingTermVectorsWriter.h"
#import "JavaUtilDeque-Protocol.h"

@interface OrgApacheLuceneCodecsCompressingCompressingTermVectorsWriter_DocData : NSObject {
    OrgApacheLuceneCodecsCompressingCompressingTermVectorsWriter *this$0_;
    int numFields_;
    id<JavaUtilDeque> *fields_;
    int posStart_;
    int offStart_;
    int payStart_;
}




-(id)initWithOrgApacheLuceneCodecsCompressingCompressingTermVectorsWriter:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 withInt:(int)arg3 withInt:(int)arg4 ;
-(id)addFieldWithInt:(int)arg0 withInt:(int)arg1 withBoolean:(BOOL)arg2 withBoolean:(BOOL)arg3 withBoolean:(BOOL)arg4 ;
-(void)dealloc;


@end


#endif