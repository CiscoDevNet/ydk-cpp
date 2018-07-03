#ifndef _INT_SERV_MIB_
#define _INT_SERV_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace INT_SERV_MIB {

class INTSERVMIB : public ydk::Entity
{
    public:
        INTSERVMIB();
        ~INTSERVMIB();

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

        class IntSrvGenObjects; //type: INTSERVMIB::IntSrvGenObjects
        class IntSrvIfAttribTable; //type: INTSERVMIB::IntSrvIfAttribTable
        class IntSrvFlowTable; //type: INTSERVMIB::IntSrvFlowTable

        std::shared_ptr<cisco_ios_xe::INT_SERV_MIB::INTSERVMIB::IntSrvGenObjects> intsrvgenobjects;
        std::shared_ptr<cisco_ios_xe::INT_SERV_MIB::INTSERVMIB::IntSrvIfAttribTable> intsrvifattribtable;
        std::shared_ptr<cisco_ios_xe::INT_SERV_MIB::INTSERVMIB::IntSrvFlowTable> intsrvflowtable;
        
}; // INTSERVMIB


class INTSERVMIB::IntSrvGenObjects : public ydk::Entity
{
    public:
        IntSrvGenObjects();
        ~IntSrvGenObjects();

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

        ydk::YLeaf intsrvflownewindex; //type: int32

}; // INTSERVMIB::IntSrvGenObjects


class INTSERVMIB::IntSrvIfAttribTable : public ydk::Entity
{
    public:
        IntSrvIfAttribTable();
        ~IntSrvIfAttribTable();

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

        class IntSrvIfAttribEntry; //type: INTSERVMIB::IntSrvIfAttribTable::IntSrvIfAttribEntry

        ydk::YList intsrvifattribentry;
        
}; // INTSERVMIB::IntSrvIfAttribTable


class INTSERVMIB::IntSrvIfAttribTable::IntSrvIfAttribEntry : public ydk::Entity
{
    public:
        IntSrvIfAttribEntry();
        ~IntSrvIfAttribEntry();

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

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf intsrvifattriballocatedbits; //type: int32
        ydk::YLeaf intsrvifattribmaxallocatedbits; //type: int32
        ydk::YLeaf intsrvifattriballocatedbuffer; //type: int32
        ydk::YLeaf intsrvifattribflows; //type: uint32
        ydk::YLeaf intsrvifattribpropagationdelay; //type: int32
        ydk::YLeaf intsrvifattribstatus; //type: RowStatus

}; // INTSERVMIB::IntSrvIfAttribTable::IntSrvIfAttribEntry


class INTSERVMIB::IntSrvFlowTable : public ydk::Entity
{
    public:
        IntSrvFlowTable();
        ~IntSrvFlowTable();

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

        class IntSrvFlowEntry; //type: INTSERVMIB::IntSrvFlowTable::IntSrvFlowEntry

        ydk::YList intsrvflowentry;
        
}; // INTSERVMIB::IntSrvFlowTable


class INTSERVMIB::IntSrvFlowTable::IntSrvFlowEntry : public ydk::Entity
{
    public:
        IntSrvFlowEntry();
        ~IntSrvFlowEntry();

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

        ydk::YLeaf intsrvflownumber; //type: int32
        ydk::YLeaf intsrvflowtype; //type: int32
        ydk::YLeaf intsrvflowowner; //type: IntSrvFlowOwner
        ydk::YLeaf intsrvflowdestaddr; //type: binary
        ydk::YLeaf intsrvflowsenderaddr; //type: binary
        ydk::YLeaf intsrvflowdestaddrlength; //type: int32
        ydk::YLeaf intsrvflowsenderaddrlength; //type: int32
        ydk::YLeaf intsrvflowprotocol; //type: int32
        ydk::YLeaf intsrvflowdestport; //type: binary
        ydk::YLeaf intsrvflowport; //type: binary
        ydk::YLeaf intsrvflowflowid; //type: int32
        ydk::YLeaf intsrvflowinterface; //type: int32
        ydk::YLeaf intsrvflowifaddr; //type: binary
        ydk::YLeaf intsrvflowrate; //type: int32
        ydk::YLeaf intsrvflowburst; //type: int32
        ydk::YLeaf intsrvflowweight; //type: int32
        ydk::YLeaf intsrvflowqueue; //type: int32
        ydk::YLeaf intsrvflowmintu; //type: int32
        ydk::YLeaf intsrvflowmaxtu; //type: int32
        ydk::YLeaf intsrvflowbesteffort; //type: uint32
        ydk::YLeaf intsrvflowpoliced; //type: uint32
        ydk::YLeaf intsrvflowdiscard; //type: boolean
        ydk::YLeaf intsrvflowservice; //type: QosService
        ydk::YLeaf intsrvfloworder; //type: int32
        ydk::YLeaf intsrvflowstatus; //type: RowStatus
        class IntSrvFlowOwner;

}; // INTSERVMIB::IntSrvFlowTable::IntSrvFlowEntry

class QosService : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bestEffort;
        static const ydk::Enum::YLeaf guaranteedDelay;
        static const ydk::Enum::YLeaf controlledLoad;

};

class INTSERVMIB::IntSrvFlowTable::IntSrvFlowEntry::IntSrvFlowOwner : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf rsvp;
        static const ydk::Enum::YLeaf management;

};


}
}

#endif /* _INT_SERV_MIB_ */

