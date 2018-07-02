#ifndef _CISCO_CONFIG_MAN_MIB_
#define _CISCO_CONFIG_MAN_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_CONFIG_MAN_MIB {

class CISCOCONFIGMANMIB : public ydk::Entity
{
    public:
        CISCOCONFIGMANMIB();
        ~CISCOCONFIGMANMIB();

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

        class CcmHistory; //type: CISCOCONFIGMANMIB::CcmHistory
        class CcmCLIHistory; //type: CISCOCONFIGMANMIB::CcmCLIHistory
        class CcmCLICfg; //type: CISCOCONFIGMANMIB::CcmCLICfg
        class CcmCTIDObjects; //type: CISCOCONFIGMANMIB::CcmCTIDObjects
        class CcmHistoryEventTable; //type: CISCOCONFIGMANMIB::CcmHistoryEventTable
        class CcmCLIHistoryCommandTable; //type: CISCOCONFIGMANMIB::CcmCLIHistoryCommandTable

        std::shared_ptr<cisco_ios_xe::CISCO_CONFIG_MAN_MIB::CISCOCONFIGMANMIB::CcmHistory> ccmhistory;
        std::shared_ptr<cisco_ios_xe::CISCO_CONFIG_MAN_MIB::CISCOCONFIGMANMIB::CcmCLIHistory> ccmclihistory;
        std::shared_ptr<cisco_ios_xe::CISCO_CONFIG_MAN_MIB::CISCOCONFIGMANMIB::CcmCLICfg> ccmclicfg;
        std::shared_ptr<cisco_ios_xe::CISCO_CONFIG_MAN_MIB::CISCOCONFIGMANMIB::CcmCTIDObjects> ccmctidobjects;
        std::shared_ptr<cisco_ios_xe::CISCO_CONFIG_MAN_MIB::CISCOCONFIGMANMIB::CcmHistoryEventTable> ccmhistoryeventtable;
        std::shared_ptr<cisco_ios_xe::CISCO_CONFIG_MAN_MIB::CISCOCONFIGMANMIB::CcmCLIHistoryCommandTable> ccmclihistorycommandtable;
        
}; // CISCOCONFIGMANMIB


class CISCOCONFIGMANMIB::CcmHistory : public ydk::Entity
{
    public:
        CcmHistory();
        ~CcmHistory();

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

        ydk::YLeaf ccmhistoryrunninglastchanged; //type: uint32
        ydk::YLeaf ccmhistoryrunninglastsaved; //type: uint32
        ydk::YLeaf ccmhistorystartuplastchanged; //type: uint32
        ydk::YLeaf ccmhistorymaxevententries; //type: int32
        ydk::YLeaf ccmhistoryevententriesbumped; //type: uint32

}; // CISCOCONFIGMANMIB::CcmHistory


class CISCOCONFIGMANMIB::CcmCLIHistory : public ydk::Entity
{
    public:
        CcmCLIHistory();
        ~CcmCLIHistory();

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

        ydk::YLeaf ccmclihistorymaxcmdentries; //type: uint32
        ydk::YLeaf ccmclihistorycmdentries; //type: uint32
        ydk::YLeaf ccmclihistorycmdentriesallowed; //type: uint32

}; // CISCOCONFIGMANMIB::CcmCLIHistory


class CISCOCONFIGMANMIB::CcmCLICfg : public ydk::Entity
{
    public:
        CcmCLICfg();
        ~CcmCLICfg();

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

        ydk::YLeaf ccmclicfgrunconfnotifenable; //type: boolean

}; // CISCOCONFIGMANMIB::CcmCLICfg


class CISCOCONFIGMANMIB::CcmCTIDObjects : public ydk::Entity
{
    public:
        CcmCTIDObjects();
        ~CcmCTIDObjects();

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

        ydk::YLeaf ccmctid; //type: uint64
        ydk::YLeaf ccmctidlastchangetime; //type: string
        ydk::YLeaf ccmctidwhochanged; //type: string
        ydk::YLeaf ccmctidrolledovernotifenable; //type: boolean

}; // CISCOCONFIGMANMIB::CcmCTIDObjects


class CISCOCONFIGMANMIB::CcmHistoryEventTable : public ydk::Entity
{
    public:
        CcmHistoryEventTable();
        ~CcmHistoryEventTable();

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

        class CcmHistoryEventEntry; //type: CISCOCONFIGMANMIB::CcmHistoryEventTable::CcmHistoryEventEntry

        ydk::YList ccmhistoryevententry;
        
}; // CISCOCONFIGMANMIB::CcmHistoryEventTable


class CISCOCONFIGMANMIB::CcmHistoryEventTable::CcmHistoryEventEntry : public ydk::Entity
{
    public:
        CcmHistoryEventEntry();
        ~CcmHistoryEventEntry();

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

        ydk::YLeaf ccmhistoryeventindex; //type: int32
        ydk::YLeaf ccmhistoryeventtime; //type: uint32
        ydk::YLeaf ccmhistoryeventcommandsource; //type: CcmHistoryEventCommandSource
        ydk::YLeaf ccmhistoryeventconfigsource; //type: HistoryEventMedium
        ydk::YLeaf ccmhistoryeventconfigdestination; //type: HistoryEventMedium
        ydk::YLeaf ccmhistoryeventterminaltype; //type: CcmHistoryEventTerminalType
        ydk::YLeaf ccmhistoryeventterminalnumber; //type: int32
        ydk::YLeaf ccmhistoryeventterminaluser; //type: string
        ydk::YLeaf ccmhistoryeventterminallocation; //type: string
        ydk::YLeaf ccmhistoryeventcommandsourceaddress; //type: string
        ydk::YLeaf ccmhistoryeventvirtualhostname; //type: string
        ydk::YLeaf ccmhistoryeventserveraddress; //type: string
        ydk::YLeaf ccmhistoryeventfile; //type: string
        ydk::YLeaf ccmhistoryeventrcpuser; //type: string
        ydk::YLeaf ccmhistoryclicmdentriesbumped; //type: uint32
        ydk::YLeaf ccmhistoryeventcommandsourceaddrtype; //type: InetAddressType
        ydk::YLeaf ccmhistoryeventcommandsourceaddrrev1; //type: binary
        ydk::YLeaf ccmhistoryeventserveraddrtype; //type: InetAddressType
        ydk::YLeaf ccmhistoryeventserveraddrrev1; //type: binary
        class CcmHistoryEventCommandSource;
        class CcmHistoryEventTerminalType;

}; // CISCOCONFIGMANMIB::CcmHistoryEventTable::CcmHistoryEventEntry


class CISCOCONFIGMANMIB::CcmCLIHistoryCommandTable : public ydk::Entity
{
    public:
        CcmCLIHistoryCommandTable();
        ~CcmCLIHistoryCommandTable();

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

        class CcmCLIHistoryCommandEntry; //type: CISCOCONFIGMANMIB::CcmCLIHistoryCommandTable::CcmCLIHistoryCommandEntry

        ydk::YList ccmclihistorycommandentry;
        
}; // CISCOCONFIGMANMIB::CcmCLIHistoryCommandTable


class CISCOCONFIGMANMIB::CcmCLIHistoryCommandTable::CcmCLIHistoryCommandEntry : public ydk::Entity
{
    public:
        CcmCLIHistoryCommandEntry();
        ~CcmCLIHistoryCommandEntry();

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

        //type: int32 (refers to cisco_ios_xe::CISCO_CONFIG_MAN_MIB::CISCOCONFIGMANMIB::CcmHistoryEventTable::CcmHistoryEventEntry::ccmhistoryeventindex)
        ydk::YLeaf ccmhistoryeventindex;
        ydk::YLeaf ccmclihistorycommandindex; //type: uint32
        ydk::YLeaf ccmclihistorycommand; //type: string

}; // CISCOCONFIGMANMIB::CcmCLIHistoryCommandTable::CcmCLIHistoryCommandEntry

class HistoryEventMedium : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf erase;
        static const ydk::Enum::YLeaf commandSource;
        static const ydk::Enum::YLeaf running;
        static const ydk::Enum::YLeaf startup;
        static const ydk::Enum::YLeaf local;
        static const ydk::Enum::YLeaf networkTftp;
        static const ydk::Enum::YLeaf networkRcp;
        static const ydk::Enum::YLeaf networkFtp;
        static const ydk::Enum::YLeaf networkScp;

};

class CISCOCONFIGMANMIB::CcmHistoryEventTable::CcmHistoryEventEntry::CcmHistoryEventCommandSource : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf commandLine;
        static const ydk::Enum::YLeaf snmp;

};

class CISCOCONFIGMANMIB::CcmHistoryEventTable::CcmHistoryEventEntry::CcmHistoryEventTerminalType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf notApplicable;
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf console;
        static const ydk::Enum::YLeaf terminal;
        static const ydk::Enum::YLeaf virtual_;
        static const ydk::Enum::YLeaf auxiliary;

};


}
}

#endif /* _CISCO_CONFIG_MAN_MIB_ */

