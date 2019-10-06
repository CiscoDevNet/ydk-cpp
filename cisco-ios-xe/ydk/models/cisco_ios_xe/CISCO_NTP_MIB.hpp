#ifndef _CISCO_NTP_MIB_
#define _CISCO_NTP_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_NTP_MIB {

class CISCONTPMIB : public ydk::Entity
{
    public:
        CISCONTPMIB();
        ~CISCONTPMIB();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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

        class CntpSystem; //type: CISCONTPMIB::CntpSystem
        class CntpPeersVarTable; //type: CISCONTPMIB::CntpPeersVarTable
        class CntpFilterRegisterTable; //type: CISCONTPMIB::CntpFilterRegisterTable

        std::shared_ptr<cisco_ios_xe::CISCO_NTP_MIB::CISCONTPMIB::CntpSystem> cntpsystem;
        std::shared_ptr<cisco_ios_xe::CISCO_NTP_MIB::CISCONTPMIB::CntpPeersVarTable> cntppeersvartable;
        std::shared_ptr<cisco_ios_xe::CISCO_NTP_MIB::CISCONTPMIB::CntpFilterRegisterTable> cntpfilterregistertable;
        
}; // CISCONTPMIB


class CISCONTPMIB::CntpSystem : public ydk::Entity
{
    public:
        CntpSystem();
        ~CntpSystem();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf cntpsysleap; //type: NTPLeapIndicator
        ydk::YLeaf cntpsysstratum; //type: int32
        ydk::YLeaf cntpsysprecision; //type: int32
        ydk::YLeaf cntpsysrootdelay; //type: binary
        ydk::YLeaf cntpsysrootdispersion; //type: binary
        ydk::YLeaf cntpsysrefid; //type: binary
        ydk::YLeaf cntpsysreftime; //type: binary
        ydk::YLeaf cntpsyspoll; //type: int32
        ydk::YLeaf cntpsyspeer; //type: int32
        ydk::YLeaf cntpsysclock; //type: binary
        ydk::YLeaf cntpsyssrvstatus; //type: CntpSysSrvStatus
        class CntpSysSrvStatus;

}; // CISCONTPMIB::CntpSystem


class CISCONTPMIB::CntpPeersVarTable : public ydk::Entity
{
    public:
        CntpPeersVarTable();
        ~CntpPeersVarTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class CntpPeersVarEntry; //type: CISCONTPMIB::CntpPeersVarTable::CntpPeersVarEntry

        ydk::YList cntppeersvarentry;
        
}; // CISCONTPMIB::CntpPeersVarTable


class CISCONTPMIB::CntpPeersVarTable::CntpPeersVarEntry : public ydk::Entity
{
    public:
        CntpPeersVarEntry();
        ~CntpPeersVarEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf cntppeersassocid; //type: int32
        ydk::YLeaf cntppeersconfigured; //type: boolean
        ydk::YLeaf cntppeerspeeraddress; //type: string
        ydk::YLeaf cntppeerspeerport; //type: int32
        ydk::YLeaf cntppeershostaddress; //type: string
        ydk::YLeaf cntppeershostport; //type: int32
        ydk::YLeaf cntppeersleap; //type: NTPLeapIndicator
        ydk::YLeaf cntppeersmode; //type: CntpPeersMode
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
        ydk::YLeaf cntppeersentrystatus; //type: RowStatus
        ydk::YLeaf cntppeersupdatetimerev1; //type: uint32
        ydk::YLeaf cntppeersprefpeer; //type: boolean
        ydk::YLeaf cntppeerspeertype; //type: InetAddressType
        ydk::YLeaf cntppeerspeername; //type: binary
        class CntpPeersMode;

}; // CISCONTPMIB::CntpPeersVarTable::CntpPeersVarEntry


class CISCONTPMIB::CntpFilterRegisterTable : public ydk::Entity
{
    public:
        CntpFilterRegisterTable();
        ~CntpFilterRegisterTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class CntpFilterRegisterEntry; //type: CISCONTPMIB::CntpFilterRegisterTable::CntpFilterRegisterEntry

        ydk::YList cntpfilterregisterentry;
        
}; // CISCONTPMIB::CntpFilterRegisterTable


class CISCONTPMIB::CntpFilterRegisterTable::CntpFilterRegisterEntry : public ydk::Entity
{
    public:
        CntpFilterRegisterEntry();
        ~CntpFilterRegisterEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        //type: int32 (refers to cisco_ios_xe::CISCO_NTP_MIB::CISCONTPMIB::CntpPeersVarTable::CntpPeersVarEntry::cntppeersassocid)
        ydk::YLeaf cntppeersassocid;
        ydk::YLeaf cntpfilterindex; //type: int32
        ydk::YLeaf cntpfilterpeersoffset; //type: binary
        ydk::YLeaf cntpfilterpeersdelay; //type: binary
        ydk::YLeaf cntpfilterpeersdispersion; //type: binary

}; // CISCONTPMIB::CntpFilterRegisterTable::CntpFilterRegisterEntry

class NTPLeapIndicator : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf noWarning;
        static const ydk::Enum::YLeaf addSecond;
        static const ydk::Enum::YLeaf subtractSecond;
        static const ydk::Enum::YLeaf alarm;

        static int get_enum_value(const std::string & name) {
            if (name == "noWarning") return 0;
            if (name == "addSecond") return 1;
            if (name == "subtractSecond") return 2;
            if (name == "alarm") return 3;
            return -1;
        }
};

class CISCONTPMIB::CntpSystem::CntpSysSrvStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf notRunning;
        static const ydk::Enum::YLeaf notSynchronized;
        static const ydk::Enum::YLeaf syncToLocal;
        static const ydk::Enum::YLeaf syncToRefclock;
        static const ydk::Enum::YLeaf syncToRemoteServer;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 1;
            if (name == "notRunning") return 2;
            if (name == "notSynchronized") return 3;
            if (name == "syncToLocal") return 4;
            if (name == "syncToRefclock") return 5;
            if (name == "syncToRemoteServer") return 6;
            return -1;
        }
};

class CISCONTPMIB::CntpPeersVarTable::CntpPeersVarEntry::CntpPeersMode : public ydk::Enum
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

        static int get_enum_value(const std::string & name) {
            if (name == "unspecified") return 0;
            if (name == "symmetricActive") return 1;
            if (name == "symmetricPassive") return 2;
            if (name == "client") return 3;
            if (name == "server") return 4;
            if (name == "broadcast") return 5;
            if (name == "reservedControl") return 6;
            if (name == "reservedPrivate") return 7;
            return -1;
        }
};


}
}

#endif /* _CISCO_NTP_MIB_ */

