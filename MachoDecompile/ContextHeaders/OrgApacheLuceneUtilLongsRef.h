// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILLONGSREF_H
#define ORGAPACHELUCENEUTILLONGSREF_H


#import <Foundation/Foundation.h>

#import "IOSLongArray.h"
#import "JavaLangComparable-Protocol.h"
#import "NSCopying-Protocol.h"

@interface OrgApacheLuceneUtilLongsRef : NSObject <JavaLangComparable, NSCopying>

 {
    IOSLongArray *longs_;
    int offset_;
    int length_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)init;
-(id)initWithInt:(int)arg0 ;
-(id)initWithLongArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(id)clone;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)longsEqualsWithOrgApacheLuceneUtilLongsRef:(id)arg0 ;
-(int)compareToWithId:(id)arg0 ;
-(BOOL)isValid;
-(void)dealloc;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
+(id)deepCopyOfWithOrgApacheLuceneUtilLongsRef:(id)arg0 ;
+(void)initialize;


@end


#endif