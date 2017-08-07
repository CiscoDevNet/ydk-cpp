#ifndef _CISCO_NTP_MIB_
#define _CISCO_NTP_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_NTP_MIB {

class CiscoNtpMib : public ydk::Entity
{
    public:
        CiscoNtpMib();
        ~CiscoNtpMib();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

        class Cntpsystem; //type: CiscoNtpMib::Cntpsystem
        class Cntppeersvartable; //type: CiscoNtpMib::Cntppeersvartable
        class Cntpfilterregistertable; //type: CiscoNtpMib::Cntpfilterregistertable

        std::shared_ptr<CISCO_NTP_MIB::CiscoNtpMib::Cntpfilterregistertable> cntpfilterregistertable;
        std::shared_ptr<CISCO_NTP_MIB::CiscoNtpMib::Cntppeersvartable> cntppeersvartable;
        std::shared_ptr<CISCO_NTP_MIB::CiscoNtpMib::Cntpsystem> cntpsystem;
        
}; // CiscoNtpMib


class CiscoNtpMib::Cntpsystem : public ydk::Entity
{
    public:
        Cntpsystem();
        ~Cntpsystem();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cntpsysleap; //type: Ntpleapindicator
        ydk::YLeaf cntpsysstratum; //type: int32
        ydk::YLeaf cntpsysprecision; //type: int32
        ydk::YLeaf cntpsysrootdelay; //type: binary
        ydk::YLeaf cntpsysrootdispersion; //type: binary
        ydk::YLeaf cntpsysrefid; //type: binary
        ydk::YLeaf cntpsysreftime; //type: binary
        ydk::YLeaf cntpsyspoll; //type: int32
        ydk::YLeaf cntpsyspeer; //type: int32
        ydk::YLeaf cntpsysclock; //type: binary
        ydk::YLeaf cntpsyssrvstatus; //type: Cntpsyssrvstatus
        class Cntpsyssrvstatus;

}; // CiscoNtpMib::Cntpsystem


class CiscoNtpMib::Cntppeersvartable : public ydk::Entity
{
    public:
        Cntppeersvartable();
        ~Cntppeersvartable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cntppeersvarentry; //type: CiscoNtpMib::Cntppeersvartable::Cntppeersvarentry

        std::vector<std::shared_ptr<CISCO_NTP_MIB::CiscoNtpMib::Cntppeersvartable::Cntppeersvarentry> > cntppeersvarentry;
        
}; // CiscoNtpMib::Cntppeersvartable


class CiscoNtpMib::Cntppeersvartable::Cntppeersvarentry : public ydk::Entity
{
    public:
        Cntppeersvarentry();
        ~Cntppeersvarentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cntppeersassocid; //type: int32
        ydk::YLeaf cntppeersconfigured; //type: boolean
        ydk::YLeaf cntppeerspeeraddress; //type: string
        ydk::YLeaf cntppeerspeerport; //type: int32
        ydk::YLeaf cntppeershostaddress; //type: string
        ydk::YLeaf cntppeershostport; //type: int32
        ydk::YLeaf cntppeersleap; //type: Ntpleapindicator
        ydk::YLeaf cntppeersmode; //type: Cntppeersmode
        ydk::YLeaf cntppeersstratum; //type: int32
        ydk::YLeaf cntppeerspeerpoll; //type: int32
        ydk::YLeaf cntppeershostpoll; //type: int32
        ydk::YLeaf cntppeersprecision; //type: int32
        ydk::YLeaf cntppeersrootdelay; //type: binary
        ydk::YLeaf cntppeersrootdispersion; //type: binary
        ydk::YLeaf cntppeersrefid; //type: binary
        ydk::YLeaf cntppeersreftime; //type: binary
        ydk::YLeaf cntppeersorgtime; //type: binary
        ydk::YLeaf cntppeersreceivetime; //type: binary
        ydk::YLeaf cntppeerstransmittime; //type: binary
        ydk::YLeaf cntppeersupdatetime; //type: int32
        ydk::YLeaf cntppeersreach; //type: int32
        ydk::YLeaf cntppeerstimer; //type: int32
        ydk::YLeaf cntppeersoffset; //type: binary
        ydk::YLeaf cntppeersdelay; //type: binary
        ydk::YLeaf cntppeersdispersion; //type: binary
        ydk::YLeaf cntppeersfiltervalidentries; //type: uint32
        ydk::YLeaf cntppeersentrystatus; //type: Rowstatus
        ydk::YLeaf cntppeersupdatetimerev1; //type: uint32
        ydk::YLeaf cntppeersprefpeer; //type: boolean
        ydk::YLeaf cntppeerspeertype; //type: Inetaddresstype
        ydk::YLeaf cntppeerspeername; //type: binary
        class Cntppeersmode;

}; // CiscoNtpMib::Cntppeersvartable::Cntppeersvarentry


class CiscoNtpMib::Cntpfilterregistertable : public ydk::Entity
{
    public:
        Cntpfilterregistertable();
        ~Cntpfilterregistertable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cntpfilterregisterentry; //type: CiscoNtpMib::Cntpfilterregistertable::Cntpfilterregisterentry

        std::vector<std::shared_ptr<CISCO_NTP_MIB::CiscoNtpMib::Cntpfilterregistertable::Cntpfilterregisterentry> > cntpfilterregisterentry;
        
}; // CiscoNtpMib::Cntpfilterregistertable


class CiscoNtpMib::Cntpfilterregistertable::Cntpfilterregisterentry : public ydk::Entity
{
    public:
        Cntpfilterregisterentry();
        ~Cntpfilterregisterentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to CISCO_NTP_MIB::CiscoNtpMib::Cntppeersvartable::Cntppeersvarentry::cntppeersassocid)
        ydk::YLeaf cntppeersassocid;
        ydk::YLeaf cntpfilterindex; //type: int32
        ydk::YLeaf cntpfilterpeersoffset; //type: binary
        ydk::YLeaf cntpfilterpeersdelay; //type: binary
        ydk::YLeaf cntpfilterpeersdispersion; //type: binary

}; // CiscoNtpMib::Cntpfilterregistertable::Cntpfilterregisterentry

class Ntpleapindicator : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf noWarning;
        static const ydk::Enum::YLeaf addSecond;
        static const ydk::Enum::YLeaf subtractSecond;
        static const ydk::Enum::YLeaf alarm;

};

class CiscoNtpMib::Cntpsystem::Cntpsyssrvstatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf notRunning;
        static const ydk::Enum::YLeaf notSynchronized;
        static const ydk::Enum::YLeaf syncToLocal;
        static const ydk::Enum::YLeaf syncToRefclock;
        static const ydk::Enum::YLeaf syncToRemoteServer;

};

class CiscoNtpMib::Cntppeersvartable::Cntppeersvarentry::Cntppeersmode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unspecified;
        static const ydk::Enum::YLeaf symmetricActive;
        static const ydk::Enum::YLeaf symmetricPassive;
        static const ydk::Enum::YLeaf client;
        static const ydk::Enum::YLeaf server;
        static const ydk::Enum::YLeaf broadcast;
        static const ydk::Enum::YLeaf reservedControl;
        static const ydk::Enum::YLeaf reservedPrivate;

};


}
}

#endif /* _CISCO_NTP_MIB_ */

