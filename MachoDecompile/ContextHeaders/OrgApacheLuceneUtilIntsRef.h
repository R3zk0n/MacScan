// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILINTSREF_H
#define ORGAPACHELUCENEUTILINTSREF_H


#import <Foundation/Foundation.h>

#import "IOSIntArray.h"
#import "JavaLangComparable-Protocol.h"
#import "NSCopying-Protocol.h"

@interface OrgApacheLuceneUtilIntsRef : NSObject <JavaLangComparable, NSCopying>

 {
    IOSIntArray *ints_;
    int offset_;
    int length_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)init;
-(id)initWithInt:(int)arg0 ;
-(id)initWithIntArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(id)clone;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)intsEqualsWithOrgApacheLuceneUtilIntsRef:(id)arg0 ;
-(int)compareToWithId:(id)arg0 ;
-(BOOL)isValid;
-(void)dealloc;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
+(id)deepCopyOfWithOrgApacheLuceneUtilIntsRef:(id)arg0 ;
+(void)initialize;


@end


#endif