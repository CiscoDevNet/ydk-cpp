#ifndef _CISCO_DIAL_CONTROL_MIB_
#define _CISCO_DIAL_CONTROL_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace CISCO_DIAL_CONTROL_MIB {

class CISCODIALCONTROLMIB : public ydk::Entity
{
    public:
        CISCODIALCONTROLMIB();
        ~CISCODIALCONTROLMIB();

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

        class CPeerGlobalConfiguration; //type: CISCODIALCONTROLMIB::CPeerGlobalConfiguration
        class CCallHistoryTable; //type: CISCODIALCONTROLMIB::CCallHistoryTable
        class CCallHistoryIecTable; //type: CISCODIALCONTROLMIB::CCallHistoryIecTable

        std::shared_ptr<cisco_ios_xe::CISCO_DIAL_CONTROL_MIB::CISCODIALCONTROLMIB::CPeerGlobalConfiguration> cpeerglobalconfiguration;
        std::shared_ptr<cisco_ios_xe::CISCO_DIAL_CONTROL_MIB::CISCODIALCONTROLMIB::CCallHistoryTable> ccallhistorytable;
        std::shared_ptr<cisco_ios_xe::CISCO_DIAL_CONTROL_MIB::CISCODIALCONTROLMIB::CCallHistoryIecTable> ccallhistoryiectable;
        
}; // CISCODIALCONTROLMIB


class CISCODIALCONTROLMIB::CPeerGlobalConfiguration : public ydk::Entity
{
    public:
        CPeerGlobalConfiguration();
        ~CPeerGlobalConfiguration();

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

        ydk::YLeaf cpeersearchtype; //type: CPeerSearchType
        class CPeerSearchType;

}; // CISCODIALCONTROLMIB::CPeerGlobalConfiguration


class CISCODIALCONTROLMIB::CCallHistoryTable : public ydk::Entity
{
    public:
        CCallHistoryTable();
        ~CCallHistoryTable();

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

        class CCallHistoryEntry; //type: CISCODIALCONTROLMIB::CCallHistoryTable::CCallHistoryEntry

        ydk::YList ccallhistoryentry;
        
}; // CISCODIALCONTROLMIB::CCallHistoryTable


class CISCODIALCONTROLMIB::CCallHistoryTable::CCallHistoryEntry : public ydk::Entity
{
    public:
        CCallHistoryEntry();
        ~CCallHistoryEntry();

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

        ydk::YLeaf ccallhistoryindex; //type: uint32
        ydk::YLeaf ccallhistorysetuptime; //type: uint32
        ydk::YLeaf ccallhistorypeeraddress; //type: string
        ydk::YLeaf ccallhistorypeersubaddress; //type: string
        ydk::YLeaf ccallhistorypeerid; //type: int32
        ydk::YLeaf ccallhistorypeerifindex; //type: int32
        ydk::YLeaf ccallhistorylogicalifindex; //type: int32
        ydk::YLeaf ccallhistorydisconnectcause; //type: binary
        ydk::YLeaf ccallhistorydisconnecttext; //type: string
        ydk::YLeaf ccallhistoryconnecttime; //type: uint32
        ydk::YLeaf ccallhistorydisconnecttime; //type: uint32
        ydk::YLeaf ccallhistorycallorigin; //type: CCallHistoryCallOrigin
        ydk::YLeaf ccallhistorychargedunits; //type: uint32
        ydk::YLeaf ccallhistoryinfotype; //type: CCallHistoryInfoType
        ydk::YLeaf ccallhistorytransmitpackets; //type: uint32
        ydk::YLeaf ccallhistorytransmitbytes; //type: uint32
        ydk::YLeaf ccallhistoryreceivepackets; //type: uint32
        ydk::YLeaf ccallhistoryreceivebytes; //type: uint32
        ydk::YLeaf ccallhistoryreleasesource; //type: CCallHistoryReleaseSource
        ydk::YLeaf ccallhistoryreleasesrc; //type: CCallHistoryReleaseSrc
        class CCallHistoryCallOrigin;
        class CCallHistoryInfoType;
        class CCallHistoryReleaseSource;
        class CCallHistoryReleaseSrc;

}; // CISCODIALCONTROLMIB::CCallHistoryTable::CCallHistoryEntry


class CISCODIALCONTROLMIB::CCallHistoryIecTable : public ydk::Entity
{
    public:
        CCallHistoryIecTable();
        ~CCallHistoryIecTable();

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

        class CCallHistoryIecEntry; //type: CISCODIALCONTROLMIB::CCallHistoryIecTable::CCallHistoryIecEntry

        ydk::YList ccallhistoryiecentry;
        
}; // CISCODIALCONTROLMIB::CCallHistoryIecTable


class CISCODIALCONTROLMIB::CCallHistoryIecTable::CCallHistoryIecEntry : public ydk::Entity
{
    public:
        CCallHistoryIecEntry();
        ~CCallHistoryIecEntry();

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

        //type: uint32 (refers to cisco_ios_xe::CISCO_DIAL_CONTROL_MIB::CISCODIALCONTROLMIB::CCallHistoryTable::CCallHistoryEntry::ccallhistoryindex)
        ydk::YLeaf ccallhistoryindex;
        ydk::YLeaf ccallhistoryiecindex; //type: uint32
        ydk::YLeaf ccallhistoryiec; //type: string

}; // CISCODIALCONTROLMIB::CCallHistoryIecTable::CCallHistoryIecEntry

class CISCODIALCONTROLMIB::CPeerGlobalConfiguration::CPeerSearchType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf datavoice;
        static const ydk::Enum::YLeaf voicedata;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 1;
            if (name == "datavoice") return 2;
            if (name == "voicedata") return 3;
            return -1;
        }
};

class CISCODIALCONTROLMIB::CCallHistoryTable::CCallHistoryEntry::CCallHistoryCallOrigin : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf originate;
        static const ydk::Enum::YLeaf answer;
        static const ydk::Enum::YLeaf callback;

        static int get_enum_value(const std::string & name) {
            if (name == "originate") return 1;
            if (name == "answer") return 2;
            if (name == "callback") return 3;
            return -1;
        }
};

class CISCODIALCONTROLMIB::CCallHistoryTable::CCallHistoryEntry::CCallHistoryInfoType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf speech;
        static const ydk::Enum::YLeaf unrestrictedDigital;
        static const ydk::Enum::YLeaf unrestrictedDigital56;
        static const ydk::Enum::YLeaf restrictedDigital;
        static const ydk::Enum::YLeaf audio31;
        static const ydk::Enum::YLeaf audio7;
        static const ydk::Enum::YLeaf video;
        static const ydk::Enum::YLeaf packetSwitched;
        static const ydk::Enum::YLeaf fax;

        static int get_enum_value(const std::string & name) {
            if (name == "other") return 1;
            if (name == "speech") return 2;
            if (name == "unrestrictedDigital") return 3;
            if (name == "unrestrictedDigital56") return 4;
            if (name == "restrictedDigital") return 5;
            if (name == "audio31") return 6;
            if (name == "audio7") return 7;
            if (name == "video") return 8;
            if (name == "packetSwitched") return 9;
            if (name == "fax") return 10;
            return -1;
        }
};

class CISCODIALCONTROLMIB::CCallHistoryTable::CCallHistoryEntry::CCallHistoryReleaseSource : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf callingPartyInPstn;
        static const ydk::Enum::YLeaf callingPartyInVoip;
        static const ydk::Enum::YLeaf calledPartyInPstn;
        static const ydk::Enum::YLeaf calledPartyInVoip;
        static const ydk::Enum::YLeaf internalRelease;
        static const ydk::Enum::YLeaf internalCallControlApp;
        static const ydk::Enum::YLeaf consoleCommand;
        static const ydk::Enum::YLeaf externalRadiusServer;
        static const ydk::Enum::YLeaf externalNmsApp;
        static const ydk::Enum::YLeaf externalCallControlAgent;

        static int get_enum_value(const std::string & name) {
            if (name == "callingPartyInPstn") return 1;
            if (name == "callingPartyInVoip") return 2;
            if (name == "calledPartyInPstn") return 3;
            if (name == "calledPartyInVoip") return 4;
            if (name == "internalRelease") return 5;
            if (name == "internalCallControlApp") return 6;
            if (name == "consoleCommand") return 7;
            if (name == "externalRadiusServer") return 8;
            if (name == "externalNmsApp") return 9;
            if (name == "externalCallControlAgent") return 10;
            return -1;
        }
};

class CISCODIALCONTROLMIB::CCallHistoryTable::CCallHistoryEntry::CCallHistoryReleaseSrc : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf callingPartyInPstn;
        static const ydk::Enum::YLeaf callingPartyInVoip;
        static const ydk::Enum::YLeaf calledPartyInPstn;
        static const ydk::Enum::YLeaf calledPartyInVoip;
        static const ydk::Enum::YLeaf internalReleaseInPotsLeg;
        static const ydk::Enum::YLeaf internalReleaseInVoipLeg;
        static const ydk::Enum::YLeaf internalCallControlApp;
        static const ydk::Enum::YLeaf internalReleaseInVoipAAA;
        static const ydk::Enum::YLeaf consoleCommand;
        static const ydk::Enum::YLeaf externalRadiusServer;
        static const ydk::Enum::YLeaf externalNmsApp;
        static const ydk::Enum::YLeaf externalCallControlAgent;
        static const ydk::Enum::YLeaf gatekeeper;
        static const ydk::Enum::YLeaf externalGKTMPServer;

        static int get_enum_value(const std::string & name) {
            if (name == "callingPartyInPstn") return 1;
            if (name == "callingPartyInVoip") return 2;
            if (name == "calledPartyInPstn") return 3;
            if (name == "calledPartyInVoip") return 4;
            if (name == "internalReleaseInPotsLeg") return 5;
            if (name == "internalReleaseInVoipLeg") return 6;
            if (name == "internalCallControlApp") return 7;
            if (name == "internalReleaseInVoipAAA") return 8;
            if (name == "consoleCommand") return 9;
            if (name == "externalRadiusServer") return 10;
            if (name == "externalNmsApp") return 11;
            if (name == "externalCallControlAgent") return 12;
            if (name == "gatekeeper") return 13;
            if (name == "externalGKTMPServer") return 14;
            return -1;
        }
};


}
}

#endif /* _CISCO_DIAL_CONTROL_MIB_ */

