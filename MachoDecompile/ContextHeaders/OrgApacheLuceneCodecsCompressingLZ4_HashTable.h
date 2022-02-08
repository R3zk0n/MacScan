// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENECODECSCOMPRESSINGLZ4_HASHTABLE_H
#define ORGAPACHELUCENECODECSCOMPRESSINGLZ4_HASHTABLE_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneUtilPackedPackedInts_Mutable.h"

@interface OrgApacheLuceneCodecsCompressingLZ4_HashTable : NSObject {
    int hashLog_;
    OrgApacheLuceneUtilPackedPackedInts_Mutable *hashTable_;
}




-(void)resetWithInt:(int)arg0 ;
-(id)init;
-(void)dealloc;


@end


#endif