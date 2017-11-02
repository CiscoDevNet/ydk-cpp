#ifndef _CISCO_IETF_PW_ENET_MIB_
#define _CISCO_IETF_PW_ENET_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_IETF_PW_ENET_MIB {

class CISCOIETFPWENETMIB : public ydk::Entity
{
    public:
        CISCOIETFPWENETMIB();
        ~CISCOIETFPWENETMIB();

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

        class Cpwvcenettable; //type: CISCOIETFPWENETMIB::Cpwvcenettable
        class Cpwvcenetmplsprimappingtable; //type: CISCOIETFPWENETMIB::Cpwvcenetmplsprimappingtable
        class Cpwvcenetstatstable; //type: CISCOIETFPWENETMIB::Cpwvcenetstatstable

        std::shared_ptr<cisco_ios_xe::CISCO_IETF_PW_ENET_MIB::CISCOIETFPWENETMIB::Cpwvcenettable> cpwvcenettable;
        std::shared_ptr<cisco_ios_xe::CISCO_IETF_PW_ENET_MIB::CISCOIETFPWENETMIB::Cpwvcenetmplsprimappingtable> cpwvcenetmplsprimappingtable;
        std::shared_ptr<cisco_ios_xe::CISCO_IETF_PW_ENET_MIB::CISCOIETFPWENETMIB::Cpwvcenetstatstable> cpwvcenetstatstable;
        
}; // CISCOIETFPWENETMIB


class CISCOIETFPWENETMIB::Cpwvcenettable : public ydk::Entity
{
    public:
        Cpwvcenettable();
        ~Cpwvcenettable();

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

        class Cpwvcenetentry; //type: CISCOIETFPWENETMIB::Cpwvcenettable::Cpwvcenetentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_IETF_PW_ENET_MIB::CISCOIETFPWENETMIB::Cpwvcenettable::Cpwvcenetentry> > cpwvcenetentry;
        
}; // CISCOIETFPWENETMIB::Cpwvcenettable


class CISCOIETFPWENETMIB::Cpwvcenettable::Cpwvcenetentry : public ydk::Entity
{
    public:
        Cpwvcenetentry();
        ~Cpwvcenetentry();

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

        //type: uint32 (refers to cisco_ios_xe::CISCO_IETF_PW_MIB::CISCOIETFPWMIB::Cpwvctable::Cpwvcentry::cpwvcindex)
        ydk::YLeaf cpwvcindex;
        ydk::YLeaf cpwvcenetpwvlan; //type: int32
        ydk::YLeaf cpwvcenetvlanmode; //type: Cpwvcenetvlanmode
        ydk::YLeaf cpwvcenetportvlan; //type: int32
        ydk::YLeaf cpwvcenetvcifindex; //type: int32
        ydk::YLeaf cpwvcenetportifindex; //type: int32
        ydk::YLeaf cpwvcenetrowstatus; //type: RowStatus
        ydk::YLeaf cpwvcenetstoragetype; //type: StorageType
        class Cpwvcenetvlanmode;

}; // CISCOIETFPWENETMIB::Cpwvcenettable::Cpwvcenetentry


class CISCOIETFPWENETMIB::Cpwvcenetmplsprimappingtable : public ydk::Entity
{
    public:
        Cpwvcenetmplsprimappingtable();
        ~Cpwvcenetmplsprimappingtable();

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

        class Cpwvcenetmplsprimappingtableentry; //type: CISCOIETFPWENETMIB::Cpwvcenetmplsprimappingtable::Cpwvcenetmplsprimappingtableentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_IETF_PW_ENET_MIB::CISCOIETFPWENETMIB::Cpwvcenetmplsprimappingtable::Cpwvcenetmplsprimappingtableentry> > cpwvcenetmplsprimappingtableentry;
        
}; // CISCOIETFPWENETMIB::Cpwvcenetmplsprimappingtable


class CISCOIETFPWENETMIB::Cpwvcenetmplsprimappingtable::Cpwvcenetmplsprimappingtableentry : public ydk::Entity
{
    public:
        Cpwvcenetmplsprimappingtableentry();
        ~Cpwvcenetmplsprimappingtableentry();

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

        //type: uint32 (refers to cisco_ios_xe::CISCO_IETF_PW_MIB::CISCOIETFPWMIB::Cpwvctable::Cpwvcentry::cpwvcindex)
        ydk::YLeaf cpwvcindex;
        ydk::YLeaf cpwvcenetmplsprimapping; //type: Cpwvcenetmplsprimapping
        ydk::YLeaf cpwvcenetmplsprimappingrowstatus; //type: RowStatus
        ydk::YLeaf cpwvcenetmplsprimappingstoragetype; //type: StorageType

}; // CISCOIETFPWENETMIB::Cpwvcenetmplsprimappingtable::Cpwvcenetmplsprimappingtableentry


class CISCOIETFPWENETMIB::Cpwvcenetstatstable : public ydk::Entity
{
    public:
        Cpwvcenetstatstable();
        ~Cpwvcenetstatstable();

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

        class Cpwvcenetstatsentry; //type: CISCOIETFPWENETMIB::Cpwvcenetstatstable::Cpwvcenetstatsentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_IETF_PW_ENET_MIB::CISCOIETFPWENETMIB::Cpwvcenetstatstable::Cpwvcenetstatsentry> > cpwvcenetstatsentry;
        
}; // CISCOIETFPWENETMIB::Cpwvcenetstatstable


class CISCOIETFPWENETMIB::Cpwvcenetstatstable::Cpwvcenetstatsentry : public ydk::Entity
{
    public:
        Cpwvcenetstatsentry();
        ~Cpwvcenetstatsentry();

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

        //type: uint32 (refers to cisco_ios_xe::CISCO_IETF_PW_MIB::CISCOIETFPWMIB::Cpwvctable::Cpwvcentry::cpwvcindex)
        ydk::YLeaf cpwvcindex;
        ydk::YLeaf cpwvcenetstatsillegalvlan; //type: uint64
        ydk::YLeaf cpwvcenetstatsillegallength; //type: uint64

}; // CISCOIETFPWENETMIB::Cpwvcenetstatstable::Cpwvcenetstatsentry

class CISCOIETFPWENETMIB::Cpwvcenettable::Cpwvcenetentry::Cpwvcenetvlanmode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf portBased;
        static const ydk::Enum::YLeaf noChange;
        static const ydk::Enum::YLeaf changeVlan;
        static const ydk::Enum::YLeaf addVlan;
        static const ydk::Enum::YLeaf removeVlan;

};


}
}

#endif /* _CISCO_IETF_PW_ENET_MIB_ */

