// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILINTSREFBUILDER_H
#define ORGAPACHELUCENEUTILINTSREFBUILDER_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneUtilIntsRef.h"

@interface OrgApacheLuceneUtilIntsRefBuilder : NSObject {
    OrgApacheLuceneUtilIntsRef *ref_;
}




-(id)init;
-(id)ints;
-(int)length;
-(void)setLengthWithInt:(int)arg0 ;
-(void)clear;
-(int)intAtWithInt:(int)arg0 ;
-(void)setIntAtWithInt:(int)arg0 withInt:(int)arg1 ;
-(void)appendWithInt:(int)arg0 ;
-(void)growWithInt:(int)arg0 ;
-(void)copyIntsWithIntArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(void)copyIntsWithOrgApacheLuceneUtilIntsRef:(id)arg0 ;
-(void)copyUTF8BytesWithOrgApacheLuceneUtilBytesRef:(id)arg0 ;
-(id)get;
-(id)toIntsRef;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(void)dealloc;


@end


#endif