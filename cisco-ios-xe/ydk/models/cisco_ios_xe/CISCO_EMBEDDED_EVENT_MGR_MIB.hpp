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

        class Ceemhistory; //type: CISCOEMBEDDEDEVENTMGRMIB::Ceemhistory
        class Ceemeventmaptable; //type: CISCOEMBEDDEDEVENTMGRMIB::Ceemeventmaptable
        class Ceemhistoryeventtable; //type: CISCOEMBEDDEDEVENTMGRMIB::Ceemhistoryeventtable
        class Ceemregisteredpolicytable; //type: CISCOEMBEDDEDEVENTMGRMIB::Ceemregisteredpolicytable

        std::shared_ptr<cisco_ios_xe::CISCO_EMBEDDED_EVENT_MGR_MIB::CISCOEMBEDDEDEVENTMGRMIB::Ceemeventmaptable> ceemeventmaptable;
        std::shared_ptr<cisco_ios_xe::CISCO_EMBEDDED_EVENT_MGR_MIB::CISCOEMBEDDEDEVENTMGRMIB::Ceemhistory> ceemhistory;
        std::shared_ptr<cisco_ios_xe::CISCO_EMBEDDED_EVENT_MGR_MIB::CISCOEMBEDDEDEVENTMGRMIB::Ceemhistoryeventtable> ceemhistoryeventtable;
        std::shared_ptr<cisco_ios_xe::CISCO_EMBEDDED_EVENT_MGR_MIB::CISCOEMBEDDEDEVENTMGRMIB::Ceemregisteredpolicytable> ceemregisteredpolicytable;
        
}; // CISCOEMBEDDEDEVENTMGRMIB


class CISCOEMBEDDEDEVENTMGRMIB::Ceemeventmaptable : public ydk::Entity
{
    public:
        Ceemeventmaptable();
        ~Ceemeventmaptable();

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

        class Ceemeventmapentry; //type: CISCOEMBEDDEDEVENTMGRMIB::Ceemeventmaptable::Ceemeventmapentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_EMBEDDED_EVENT_MGR_MIB::CISCOEMBEDDEDEVENTMGRMIB::Ceemeventmaptable::Ceemeventmapentry> > ceemeventmapentry;
        
}; // CISCOEMBEDDEDEVENTMGRMIB::Ceemeventmaptable


class CISCOEMBEDDEDEVENTMGRMIB::Ceemeventmaptable::Ceemeventmapentry : public ydk::Entity
{
    public:
        Ceemeventmapentry();
        ~Ceemeventmapentry();

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

}; // CISCOEMBEDDEDEVENTMGRMIB::Ceemeventmaptable::Ceemeventmapentry


class CISCOEMBEDDEDEVENTMGRMIB::Ceemhistory : public ydk::Entity
{
    public:
        Ceemhistory();
        ~Ceemhistory();

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

}; // CISCOEMBEDDEDEVENTMGRMIB::Ceemhistory


class CISCOEMBEDDEDEVENTMGRMIB::Ceemhistoryeventtable : public ydk::Entity
{
    public:
        Ceemhistoryeventtable();
        ~Ceemhistoryeventtable();

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

        class Ceemhistoryevententry; //type: CISCOEMBEDDEDEVENTMGRMIB::Ceemhistoryeventtable::Ceemhistoryevententry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_EMBEDDED_EVENT_MGR_MIB::CISCOEMBEDDEDEVENTMGRMIB::Ceemhistoryeventtable::Ceemhistoryevententry> > ceemhistoryevententry;
        
}; // CISCOEMBEDDEDEVENTMGRMIB::Ceemhistoryeventtable


class CISCOEMBEDDEDEVENTMGRMIB::Ceemhistoryeventtable::Ceemhistoryevententry : public ydk::Entity
{
    public:
        Ceemhistoryevententry();
        ~Ceemhistoryevententry();

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

}; // CISCOEMBEDDEDEVENTMGRMIB::Ceemhistoryeventtable::Ceemhistoryevententry


class CISCOEMBEDDEDEVENTMGRMIB::Ceemregisteredpolicytable : public ydk::Entity
{
    public:
        Ceemregisteredpolicytable();
        ~Ceemregisteredpolicytable();

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

        class Ceemregisteredpolicyentry; //type: CISCOEMBEDDEDEVENTMGRMIB::Ceemregisteredpolicytable::Ceemregisteredpolicyentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_EMBEDDED_EVENT_MGR_MIB::CISCOEMBEDDEDEVENTMGRMIB::Ceemregisteredpolicytable::Ceemregisteredpolicyentry> > ceemregisteredpolicyentry;
        
}; // CISCOEMBEDDEDEVENTMGRMIB::Ceemregisteredpolicytable


class CISCOEMBEDDEDEVENTMGRMIB::Ceemregisteredpolicytable::Ceemregisteredpolicyentry : public ydk::Entity
{
    public:
        Ceemregisteredpolicyentry();
        ~Ceemregisteredpolicyentry();

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
        ydk::YLeaf ceemregisteredpolicystatus; //type: Ceemregisteredpolicystatus
        ydk::YLeaf ceemregisteredpolicytype; //type: Ceemregisteredpolicytype
        ydk::YLeaf ceemregisteredpolicynotifflag; //type: boolean
        ydk::YLeaf ceemregisteredpolicyregtime; //type: string
        ydk::YLeaf ceemregisteredpolicyenabledtime; //type: string
        ydk::YLeaf ceemregisteredpolicyruntime; //type: string
        ydk::YLeaf ceemregisteredpolicyruncount; //type: uint32
        ydk::YLeaf ceemregisteredpolicyeventtype5; //type: uint32
        ydk::YLeaf ceemregisteredpolicyeventtype6; //type: uint32
        ydk::YLeaf ceemregisteredpolicyeventtype7; //type: uint32
        ydk::YLeaf ceemregisteredpolicyeventtype8; //type: uint32
        class Ceemregisteredpolicystatus;
        class Ceemregisteredpolicytype;

}; // CISCOEMBEDDEDEVENTMGRMIB::Ceemregisteredpolicytable::Ceemregisteredpolicyentry

class NotifySource : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf server;
        static const ydk::Enum::YLeaf policy;

};

class CISCOEMBEDDEDEVENTMGRMIB::Ceemregisteredpolicytable::Ceemregisteredpolicyentry::Ceemregisteredpolicystatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

};

class CISCOEMBEDDEDEVENTMGRMIB::Ceemregisteredpolicytable::Ceemregisteredpolicyentry::Ceemregisteredpolicytype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf user;
        static const ydk::Enum::YLeaf system;

};


}
}

#endif /* _CISCO_EMBEDDED_EVENT_MGR_MIB_ */

