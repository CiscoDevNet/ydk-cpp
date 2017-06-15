#ifndef _CISCO_NTP_MIB_
#define _CISCO_NTP_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace CISCO_NTP_MIB {

class CiscoNtpMib : public Entity
{
    public:
        CiscoNtpMib();
        ~CiscoNtpMib();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Cntpsystem; //type: CiscoNtpMib::Cntpsystem
        class Cntppeersvartable; //type: CiscoNtpMib::Cntppeersvartable
        class Cntpfilterregistertable; //type: CiscoNtpMib::Cntpfilterregistertable

        std::shared_ptr<CISCO_NTP_MIB::CiscoNtpMib::Cntpfilterregistertable> cntpfilterregistertable_;
        std::shared_ptr<CISCO_NTP_MIB::CiscoNtpMib::Cntppeersvartable> cntppeersvartable_;
        std::shared_ptr<CISCO_NTP_MIB::CiscoNtpMib::Cntpsystem> cntpsystem_;
        
}; // CiscoNtpMib


class CiscoNtpMib::Cntpsystem : public Entity
{
    public:
        Cntpsystem();
        ~Cntpsystem();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cntpsysleap; //type: NtpleapindicatorEnum
        YLeaf cntpsysstratum; //type: int32
        YLeaf cntpsysprecision; //type: int32
        YLeaf cntpsysrootdelay; //type: binary
        YLeaf cntpsysrootdispersion; //type: binary
        YLeaf cntpsysrefid; //type: binary
        YLeaf cntpsysreftime; //type: binary
        YLeaf cntpsyspoll; //type: int32
        YLeaf cntpsyspeer; //type: int32
        YLeaf cntpsysclock; //type: binary
        YLeaf cntpsyssrvstatus; //type: CntpsyssrvstatusEnum
        class CntpsyssrvstatusEnum;

}; // CiscoNtpMib::Cntpsystem


class CiscoNtpMib::Cntppeersvartable : public Entity
{
    public:
        Cntppeersvartable();
        ~Cntppeersvartable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cntppeersvarentry; //type: CiscoNtpMib::Cntppeersvartable::Cntppeersvarentry

        std::vector<std::shared_ptr<CISCO_NTP_MIB::CiscoNtpMib::Cntppeersvartable::Cntppeersvarentry> > cntppeersvarentry_;
        
}; // CiscoNtpMib::Cntppeersvartable


class CiscoNtpMib::Cntppeersvartable::Cntppeersvarentry : public Entity
{
    public:
        Cntppeersvarentry();
        ~Cntppeersvarentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cntppeersassocid; //type: int32
        YLeaf cntppeersconfigured; //type: boolean
        YLeaf cntppeerspeeraddress; //type: string
        YLeaf cntppeerspeerport; //type: int32
        YLeaf cntppeershostaddress; //type: string
        YLeaf cntppeershostport; //type: int32
        YLeaf cntppeersleap; //type: NtpleapindicatorEnum
        YLeaf cntppeersmode; //type: CntppeersmodeEnum
        YLeaf cntppeersstratum; //type: int32
        YLeaf cntppeerspeerpoll; //type: int32
        YLeaf cntppeershostpoll; //type: int32
        YLeaf cntppeersprecision; //type: int32
        YLeaf cntppeersrootdelay; //type: binary
        YLeaf cntppeersrootdispersion; //type: binary
        YLeaf cntppeersrefid; //type: binary
        YLeaf cntppeersreftime; //type: binary
        YLeaf cntppeersorgtime; //type: binary
        YLeaf cntppeersreceivetime; //type: binary
        YLeaf cntppeerstransmittime; //type: binary
        YLeaf cntppeersupdatetime; //type: int32
        YLeaf cntppeersreach; //type: int32
        YLeaf cntppeerstimer; //type: int32
        YLeaf cntppeersoffset; //type: binary
        YLeaf cntppeersdelay; //type: binary
        YLeaf cntppeersdispersion; //type: binary
        YLeaf cntppeersfiltervalidentries; //type: uint32
        YLeaf cntppeersentrystatus; //type: RowstatusEnum
        YLeaf cntppeersupdatetimerev1; //type: uint32
        YLeaf cntppeersprefpeer; //type: boolean
        YLeaf cntppeerspeertype; //type: InetaddresstypeEnum
        YLeaf cntppeerspeername; //type: binary
        class CntppeersmodeEnum;

}; // CiscoNtpMib::Cntppeersvartable::Cntppeersvarentry


class CiscoNtpMib::Cntpfilterregistertable : public Entity
{
    public:
        Cntpfilterregistertable();
        ~Cntpfilterregistertable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cntpfilterregisterentry; //type: CiscoNtpMib::Cntpfilterregistertable::Cntpfilterregisterentry

        std::vector<std::shared_ptr<CISCO_NTP_MIB::CiscoNtpMib::Cntpfilterregistertable::Cntpfilterregisterentry> > cntpfilterregisterentry_;
        
}; // CiscoNtpMib::Cntpfilterregistertable


class CiscoNtpMib::Cntpfilterregistertable::Cntpfilterregisterentry : public Entity
{
    public:
        Cntpfilterregisterentry();
        ~Cntpfilterregisterentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to CISCO_NTP_MIB::CiscoNtpMib::Cntppeersvartable::Cntppeersvarentry::cntppeersassocid)
        YLeaf cntppeersassocid;
        YLeaf cntpfilterindex; //type: int32
        YLeaf cntpfilterpeersoffset; //type: binary
        YLeaf cntpfilterpeersdelay; //type: binary
        YLeaf cntpfilterpeersdispersion; //type: binary

}; // CiscoNtpMib::Cntpfilterregistertable::Cntpfilterregisterentry

class NtpleapindicatorEnum : public Enum
{
    public:
        static const Enum::YLeaf noWarning;
        static const Enum::YLeaf addSecond;
        static const Enum::YLeaf subtractSecond;
        static const Enum::YLeaf alarm;

};

class CiscoNtpMib::Cntpsystem::CntpsyssrvstatusEnum : public Enum
{
    public:
        static const Enum::YLeaf unknown;
        static const Enum::YLeaf notRunning;
        static const Enum::YLeaf notSynchronized;
        static const Enum::YLeaf syncToLocal;
        static const Enum::YLeaf syncToRefclock;
        static const Enum::YLeaf syncToRemoteServer;

};

class CiscoNtpMib::Cntppeersvartable::Cntppeersvarentry::CntppeersmodeEnum : public Enum
{
    public:
        static const Enum::YLeaf unspecified;
        static const Enum::YLeaf symmetricActive;
        static const Enum::YLeaf symmetricPassive;
        static const Enum::YLeaf client;
        static const Enum::YLeaf server;
        static const Enum::YLeaf broadcast;
        static const Enum::YLeaf reservedControl;
        static const Enum::YLeaf reservedPrivate;

};


}
}

#endif /* _CISCO_NTP_MIB_ */

