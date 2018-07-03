#ifndef _CISCO_EMBEDDED_EVENT_MGR_MIB_
#define _CISCO_EMBEDDED_EVENT_MGR_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace CISCO_EMBEDDED_EVENT_MGR_MIB {

class CISCOEMBEDDEDEVENTMGRMIB : public ydk::Entity
{
    public:
        CISCOEMBEDDEDEVENTMGRMIB();
        ~CISCOEMBEDDEDEVENTMGRMIB();

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

        class CeemHistory; //type: CISCOEMBEDDEDEVENTMGRMIB::CeemHistory
        class CeemEventMapTable; //type: CISCOEMBEDDEDEVENTMGRMIB::CeemEventMapTable
        class CeemHistoryEventTable; //type: CISCOEMBEDDEDEVENTMGRMIB::CeemHistoryEventTable
        class CeemRegisteredPolicyTable; //type: CISCOEMBEDDEDEVENTMGRMIB::CeemRegisteredPolicyTable

        std::shared_ptr<cisco_ios_xe::CISCO_EMBEDDED_EVENT_MGR_MIB::CISCOEMBEDDEDEVENTMGRMIB::CeemHistory> ceemhistory;
        std::shared_ptr<cisco_ios_xe::CISCO_EMBEDDED_EVENT_MGR_MIB::CISCOEMBEDDEDEVENTMGRMIB::CeemEventMapTable> ceemeventmaptable;
        std::shared_ptr<cisco_ios_xe::CISCO_EMBEDDED_EVENT_MGR_MIB::CISCOEMBEDDEDEVENTMGRMIB::CeemHistoryEventTable> ceemhistoryeventtable;
        std::shared_ptr<cisco_ios_xe::CISCO_EMBEDDED_EVENT_MGR_MIB::CISCOEMBEDDEDEVENTMGRMIB::CeemRegisteredPolicyTable> ceemregisteredpolicytable;
        
}; // CISCOEMBEDDEDEVENTMGRMIB


class CISCOEMBEDDEDEVENTMGRMIB::CeemHistory : public ydk::Entity
{
    public:
        CeemHistory();
        ~CeemHistory();

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

        ydk::YLeaf ceemhistorymaxevententries; //type: int32
        ydk::YLeaf ceemhistorylastevententry; //type: uint32

}; // CISCOEMBEDDEDEVENTMGRMIB::CeemHistory


class CISCOEMBEDDEDEVENTMGRMIB::CeemEventMapTable : public ydk::Entity
{
    public:
        CeemEventMapTable();
        ~CeemEventMapTable();

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

        class CeemEventMapEntry; //type: CISCOEMBEDDEDEVENTMGRMIB::CeemEventMapTable::CeemEventMapEntry

        ydk::YList ceemeventmapentry;
        
}; // CISCOEMBEDDEDEVENTMGRMIB::CeemEventMapTable


class CISCOEMBEDDEDEVENTMGRMIB::CeemEventMapTable::CeemEventMapEntry : public ydk::Entity
{
    public:
        CeemEventMapEntry();
        ~CeemEventMapEntry();

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

        ydk::YLeaf ceemeventindex; //type: uint32
        ydk::YLeaf ceemeventname; //type: string
        ydk::YLeaf ceemeventdescrtext; //type: string

}; // CISCOEMBEDDEDEVENTMGRMIB::CeemEventMapTable::CeemEventMapEntry


class CISCOEMBEDDEDEVENTMGRMIB::CeemHistoryEventTable : public ydk::Entity
{
    public:
        CeemHistoryEventTable();
        ~CeemHistoryEventTable();

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

        class CeemHistoryEventEntry; //type: CISCOEMBEDDEDEVENTMGRMIB::CeemHistoryEventTable::CeemHistoryEventEntry

        ydk::YList ceemhistoryevententry;
        
}; // CISCOEMBEDDEDEVENTMGRMIB::CeemHistoryEventTable


class CISCOEMBEDDEDEVENTMGRMIB::CeemHistoryEventTable::CeemHistoryEventEntry : public ydk::Entity
{
    public:
        CeemHistoryEventEntry();
        ~CeemHistoryEventEntry();

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

        ydk::YLeaf ceemhistoryeventindex; //type: uint32
        ydk::YLeaf ceemhistoryeventtype1; //type: uint32
        ydk::YLeaf ceemhistoryeventtype2; //type: uint32
        ydk::YLeaf ceemhistoryeventtype3; //type: uint32
        ydk::YLeaf ceemhistoryeventtype4; //type: uint32
        ydk::YLeaf ceemhistorypolicypath; //type: string
        ydk::YLeaf ceemhistorypolicyname; //type: string
        ydk::YLeaf ceemhistorypolicyexitstatus; //type: int32
        ydk::YLeaf ceemhistorypolicyintdata1; //type: int32
        ydk::YLeaf ceemhistorypolicyintdata2; //type: int32
        ydk::YLeaf ceemhistorypolicystrdata; //type: string
        ydk::YLeaf ceemhistorynotifytype; //type: NotifySource
        ydk::YLeaf ceemhistoryeventtype5; //type: uint32
        ydk::YLeaf ceemhistoryeventtype6; //type: uint32
        ydk::YLeaf ceemhistoryeventtype7; //type: uint32
        ydk::YLeaf ceemhistoryeventtype8; //type: uint32

}; // CISCOEMBEDDEDEVENTMGRMIB::CeemHistoryEventTable::CeemHistoryEventEntry


class CISCOEMBEDDEDEVENTMGRMIB::CeemRegisteredPolicyTable : public ydk::Entity
{
    public:
        CeemRegisteredPolicyTable();
        ~CeemRegisteredPolicyTable();

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

        class CeemRegisteredPolicyEntry; //type: CISCOEMBEDDEDEVENTMGRMIB::CeemRegisteredPolicyTable::CeemRegisteredPolicyEntry

        ydk::YList ceemregisteredpolicyentry;
        
}; // CISCOEMBEDDEDEVENTMGRMIB::CeemRegisteredPolicyTable


class CISCOEMBEDDEDEVENTMGRMIB::CeemRegisteredPolicyTable::CeemRegisteredPolicyEntry : public ydk::Entity
{
    public:
        CeemRegisteredPolicyEntry();
        ~CeemRegisteredPolicyEntry();

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

        ydk::YLeaf ceemregisteredpolicyindex; //type: uint32
        ydk::YLeaf ceemregisteredpolicyname; //type: string
        ydk::YLeaf ceemregisteredpolicyeventtype1; //type: uint32
        ydk::YLeaf ceemregisteredpolicyeventtype2; //type: uint32
        ydk::YLeaf ceemregisteredpolicyeventtype3; //type: uint32
        ydk::YLeaf ceemregisteredpolicyeventtype4; //type: uint32
        ydk::YLeaf ceemregisteredpolicystatus; //type: CeemRegisteredPolicyStatus
        ydk::YLeaf ceemregisteredpolicytype; //type: CeemRegisteredPolicyType
        ydk::YLeaf ceemregisteredpolicynotifflag; //type: boolean
        ydk::YLeaf ceemregisteredpolicyregtime; //type: string
        ydk::YLeaf ceemregisteredpolicyenabledtime; //type: string
        ydk::YLeaf ceemregisteredpolicyruntime; //type: string
        ydk::YLeaf ceemregisteredpolicyruncount; //type: uint32
        ydk::YLeaf ceemregisteredpolicyeventtype5; //type: uint32
        ydk::YLeaf ceemregisteredpolicyeventtype6; //type: uint32
        ydk::YLeaf ceemregisteredpolicyeventtype7; //type: uint32
        ydk::YLeaf ceemregisteredpolicyeventtype8; //type: uint32
        class CeemRegisteredPolicyStatus;
        class CeemRegisteredPolicyType;

}; // CISCOEMBEDDEDEVENTMGRMIB::CeemRegisteredPolicyTable::CeemRegisteredPolicyEntry

class NotifySource : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf server;
        static const ydk::Enum::YLeaf policy;

};

class CISCOEMBEDDEDEVENTMGRMIB::CeemRegisteredPolicyTable::CeemRegisteredPolicyEntry::CeemRegisteredPolicyStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

};

class CISCOEMBEDDEDEVENTMGRMIB::CeemRegisteredPolicyTable::CeemRegisteredPolicyEntry::CeemRegisteredPolicyType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf user;
        static const ydk::Enum::YLeaf system;

};


}
}

#endif /* _CISCO_EMBEDDED_EVENT_MGR_MIB_ */

