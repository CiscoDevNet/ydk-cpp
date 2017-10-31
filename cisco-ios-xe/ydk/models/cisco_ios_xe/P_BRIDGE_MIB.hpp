#ifndef _P_BRIDGE_MIB_
#define _P_BRIDGE_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace P_BRIDGE_MIB {

class PBRIDGEMIB : public ydk::Entity
{
    public:
        PBRIDGEMIB();
        ~PBRIDGEMIB();

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

        class Dot1Dextbase; //type: PBRIDGEMIB::Dot1Dextbase
        class Dot1Dtphcporttable; //type: PBRIDGEMIB::Dot1Dtphcporttable
        class Dot1Dtpportoverflowtable; //type: PBRIDGEMIB::Dot1Dtpportoverflowtable
        class Dot1Duserpriorityregentable; //type: PBRIDGEMIB::Dot1Duserpriorityregentable
        class Dot1Dtrafficclasstable; //type: PBRIDGEMIB::Dot1Dtrafficclasstable
        class Dot1Dportoutboundaccessprioritytable; //type: PBRIDGEMIB::Dot1Dportoutboundaccessprioritytable

        std::shared_ptr<cisco_ios_xe::P_BRIDGE_MIB::PBRIDGEMIB::Dot1Dextbase> dot1dextbase;
        std::shared_ptr<cisco_ios_xe::P_BRIDGE_MIB::PBRIDGEMIB::Dot1Dtphcporttable> dot1dtphcporttable;
        std::shared_ptr<cisco_ios_xe::P_BRIDGE_MIB::PBRIDGEMIB::Dot1Dtpportoverflowtable> dot1dtpportoverflowtable;
        std::shared_ptr<cisco_ios_xe::P_BRIDGE_MIB::PBRIDGEMIB::Dot1Duserpriorityregentable> dot1duserpriorityregentable;
        std::shared_ptr<cisco_ios_xe::P_BRIDGE_MIB::PBRIDGEMIB::Dot1Dtrafficclasstable> dot1dtrafficclasstable;
        std::shared_ptr<cisco_ios_xe::P_BRIDGE_MIB::PBRIDGEMIB::Dot1Dportoutboundaccessprioritytable> dot1dportoutboundaccessprioritytable;
        
}; // PBRIDGEMIB


class PBRIDGEMIB::Dot1Dextbase : public ydk::Entity
{
    public:
        Dot1Dextbase();
        ~Dot1Dextbase();

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

        ydk::YLeaf dot1ddevicecapabilities; //type: Dot1Ddevicecapabilities
        ydk::YLeaf dot1dtrafficclassesenabled; //type: boolean
        ydk::YLeaf dot1dgmrpstatus; //type: EnabledStatus

}; // PBRIDGEMIB::Dot1Dextbase


class PBRIDGEMIB::Dot1Dtphcporttable : public ydk::Entity
{
    public:
        Dot1Dtphcporttable();
        ~Dot1Dtphcporttable();

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

        class Dot1Dtphcportentry; //type: PBRIDGEMIB::Dot1Dtphcporttable::Dot1Dtphcportentry

        std::vector<std::shared_ptr<cisco_ios_xe::P_BRIDGE_MIB::PBRIDGEMIB::Dot1Dtphcporttable::Dot1Dtphcportentry> > dot1dtphcportentry;
        
}; // PBRIDGEMIB::Dot1Dtphcporttable


class PBRIDGEMIB::Dot1Dtphcporttable::Dot1Dtphcportentry : public ydk::Entity
{
    public:
        Dot1Dtphcportentry();
        ~Dot1Dtphcportentry();

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

        //type: int32 (refers to cisco_ios_xe::BRIDGE_MIB::BRIDGEMIB::Dot1Dtpporttable::Dot1Dtpportentry::dot1dtpport)
        ydk::YLeaf dot1dtpport;
        ydk::YLeaf dot1dtphcportinframes; //type: uint64
        ydk::YLeaf dot1dtphcportoutframes; //type: uint64
        ydk::YLeaf dot1dtphcportindiscards; //type: uint64

}; // PBRIDGEMIB::Dot1Dtphcporttable::Dot1Dtphcportentry


class PBRIDGEMIB::Dot1Dtpportoverflowtable : public ydk::Entity
{
    public:
        Dot1Dtpportoverflowtable();
        ~Dot1Dtpportoverflowtable();

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

        class Dot1Dtpportoverflowentry; //type: PBRIDGEMIB::Dot1Dtpportoverflowtable::Dot1Dtpportoverflowentry

        std::vector<std::shared_ptr<cisco_ios_xe::P_BRIDGE_MIB::PBRIDGEMIB::Dot1Dtpportoverflowtable::Dot1Dtpportoverflowentry> > dot1dtpportoverflowentry;
        
}; // PBRIDGEMIB::Dot1Dtpportoverflowtable


class PBRIDGEMIB::Dot1Dtpportoverflowtable::Dot1Dtpportoverflowentry : public ydk::Entity
{
    public:
        Dot1Dtpportoverflowentry();
        ~Dot1Dtpportoverflowentry();

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

        //type: int32 (refers to cisco_ios_xe::BRIDGE_MIB::BRIDGEMIB::Dot1Dtpporttable::Dot1Dtpportentry::dot1dtpport)
        ydk::YLeaf dot1dtpport;
        ydk::YLeaf dot1dtpportinoverflowframes; //type: uint32
        ydk::YLeaf dot1dtpportoutoverflowframes; //type: uint32
        ydk::YLeaf dot1dtpportinoverflowdiscards; //type: uint32

}; // PBRIDGEMIB::Dot1Dtpportoverflowtable::Dot1Dtpportoverflowentry


class PBRIDGEMIB::Dot1Duserpriorityregentable : public ydk::Entity
{
    public:
        Dot1Duserpriorityregentable();
        ~Dot1Duserpriorityregentable();

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

        class Dot1Duserpriorityregenentry; //type: PBRIDGEMIB::Dot1Duserpriorityregentable::Dot1Duserpriorityregenentry

        std::vector<std::shared_ptr<cisco_ios_xe::P_BRIDGE_MIB::PBRIDGEMIB::Dot1Duserpriorityregentable::Dot1Duserpriorityregenentry> > dot1duserpriorityregenentry;
        
}; // PBRIDGEMIB::Dot1Duserpriorityregentable


class PBRIDGEMIB::Dot1Duserpriorityregentable::Dot1Duserpriorityregenentry : public ydk::Entity
{
    public:
        Dot1Duserpriorityregenentry();
        ~Dot1Duserpriorityregenentry();

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

        //type: int32 (refers to cisco_ios_xe::BRIDGE_MIB::BRIDGEMIB::Dot1Dbaseporttable::Dot1Dbaseportentry::dot1dbaseport)
        ydk::YLeaf dot1dbaseport;
        ydk::YLeaf dot1duserpriority; //type: int32
        ydk::YLeaf dot1dregenuserpriority; //type: int32

}; // PBRIDGEMIB::Dot1Duserpriorityregentable::Dot1Duserpriorityregenentry


class PBRIDGEMIB::Dot1Dtrafficclasstable : public ydk::Entity
{
    public:
        Dot1Dtrafficclasstable();
        ~Dot1Dtrafficclasstable();

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

        class Dot1Dtrafficclassentry; //type: PBRIDGEMIB::Dot1Dtrafficclasstable::Dot1Dtrafficclassentry

        std::vector<std::shared_ptr<cisco_ios_xe::P_BRIDGE_MIB::PBRIDGEMIB::Dot1Dtrafficclasstable::Dot1Dtrafficclassentry> > dot1dtrafficclassentry;
        
}; // PBRIDGEMIB::Dot1Dtrafficclasstable


class PBRIDGEMIB::Dot1Dtrafficclasstable::Dot1Dtrafficclassentry : public ydk::Entity
{
    public:
        Dot1Dtrafficclassentry();
        ~Dot1Dtrafficclassentry();

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

        //type: int32 (refers to cisco_ios_xe::BRIDGE_MIB::BRIDGEMIB::Dot1Dbaseporttable::Dot1Dbaseportentry::dot1dbaseport)
        ydk::YLeaf dot1dbaseport;
        ydk::YLeaf dot1dtrafficclasspriority; //type: int32
        ydk::YLeaf dot1dtrafficclass; //type: int32

}; // PBRIDGEMIB::Dot1Dtrafficclasstable::Dot1Dtrafficclassentry


class PBRIDGEMIB::Dot1Dportoutboundaccessprioritytable : public ydk::Entity
{
    public:
        Dot1Dportoutboundaccessprioritytable();
        ~Dot1Dportoutboundaccessprioritytable();

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

        class Dot1Dportoutboundaccesspriorityentry; //type: PBRIDGEMIB::Dot1Dportoutboundaccessprioritytable::Dot1Dportoutboundaccesspriorityentry

        std::vector<std::shared_ptr<cisco_ios_xe::P_BRIDGE_MIB::PBRIDGEMIB::Dot1Dportoutboundaccessprioritytable::Dot1Dportoutboundaccesspriorityentry> > dot1dportoutboundaccesspriorityentry;
        
}; // PBRIDGEMIB::Dot1Dportoutboundaccessprioritytable


class PBRIDGEMIB::Dot1Dportoutboundaccessprioritytable::Dot1Dportoutboundaccesspriorityentry : public ydk::Entity
{
    public:
        Dot1Dportoutboundaccesspriorityentry();
        ~Dot1Dportoutboundaccesspriorityentry();

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

        //type: int32 (refers to cisco_ios_xe::BRIDGE_MIB::BRIDGEMIB::Dot1Dbaseporttable::Dot1Dbaseportentry::dot1dbaseport)
        ydk::YLeaf dot1dbaseport;
        //type: int32 (refers to cisco_ios_xe::P_BRIDGE_MIB::PBRIDGEMIB::Dot1Duserpriorityregentable::Dot1Duserpriorityregenentry::dot1dregenuserpriority)
        ydk::YLeaf dot1dregenuserpriority;
        ydk::YLeaf dot1dportoutboundaccesspriority; //type: int32

}; // PBRIDGEMIB::Dot1Dportoutboundaccessprioritytable::Dot1Dportoutboundaccesspriorityentry

class EnabledStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

};


}
}

#endif /* _P_BRIDGE_MIB_ */

