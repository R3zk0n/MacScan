// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENECODECSCOMPRESSINGCOMPRESSINGSTOREDFIELDSREADER_SERIALIZEDDOCUMENT_H
#define ORGAPACHELUCENECODECSCOMPRESSINGCOMPRESSINGSTOREDFIELDSREADER_SERIALIZEDDOCUMENT_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneStoreDataInput.h"

@interface OrgApacheLuceneCodecsCompressingCompressingStoredFieldsReader_SerializedDocument : NSObject {
    OrgApacheLuceneStoreDataInput *in_;
    int length_;
    int numStoredFields_;
}




-(id)initWithOrgApacheLuceneStoreDataInput:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(void)dealloc;


@end


#endif