// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILVERSION_H
#define ORGAPACHELUCENEUTILVERSION_H


#import <Foundation/Foundation.h>


@interface OrgApacheLuceneUtilVersion : NSObject {
    int major_;
    int minor_;
    int bugfix_;
    int prerelease_;
    int encodedValue_;
}




-(id)initWithInt:(int)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(id)initWithInt:(int)arg0 withInt:(int)arg1 withInt:(int)arg2 withInt:(int)arg3 ;
-(BOOL)onOrAfterWithOrgApacheLuceneUtilVersion:(id)arg0 ;
-(id)description;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)encodedIsValid;
-(NSUInteger)hash;
+(id)parseWithNSString:(id)arg0 ;
+(id)parseLenientlyWithNSString:(id)arg0 ;
+(id)fromBitsWithInt:(int)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
+(void)initialize;


@end


#endif