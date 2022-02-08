// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENECODECSCOMPRESSINGLZ4_HCHASHTABLE_H
#define ORGAPACHELUCENECODECSCOMPRESSINGLZ4_HCHASHTABLE_H


#import <Foundation/Foundation.h>

#import "IOSIntArray.h"
#import "IOSShortArray.h"

@interface OrgApacheLuceneCodecsCompressingLZ4_HCHashTable : NSObject {
    int nextToUpdate_;
    int base_;
    IOSIntArray *hashTable_;
    IOSShortArray *chainTable_;
}




-(id)init;
-(void)resetWithInt:(int)arg0 ;
-(int)hashPointerWithByteArray:(id)arg0 withInt:(int)arg1 ;
-(int)nextWithInt:(int)arg0 ;
-(void)addHashWithByteArray:(id)arg0 withInt:(int)arg1 ;
-(void)insertWithInt:(int)arg0 withByteArray:(id)arg1 ;
-(BOOL)insertAndFindBestMatchWithByteArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 withOrgApacheLuceneCodecsCompressingLZ4_Match:(id)arg3 ;
-(BOOL)insertAndFindWiderMatchWithByteArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 withInt:(int)arg3 withInt:(int)arg4 withOrgApacheLuceneCodecsCompressingLZ4_Match:(id)arg5 ;
-(void)dealloc;


@end


#endif