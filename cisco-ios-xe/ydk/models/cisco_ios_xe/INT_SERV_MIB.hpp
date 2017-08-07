#ifndef _INT_SERV_MIB_
#define _INT_SERV_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace INT_SERV_MIB {

class IntServMib : public ydk::Entity
{
    public:
        IntServMib();
        ~IntServMib();

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

        class Intsrvgenobjects; //type: IntServMib::Intsrvgenobjects
        class Intsrvifattribtable; //type: IntServMib::Intsrvifattribtable
        class Intsrvflowtable; //type: IntServMib::Intsrvflowtable

        std::shared_ptr<INT_SERV_MIB::IntServMib::Intsrvflowtable> intsrvflowtable;
        std::shared_ptr<INT_SERV_MIB::IntServMib::Intsrvgenobjects> intsrvgenobjects;
        std::shared_ptr<INT_SERV_MIB::IntServMib::Intsrvifattribtable> intsrvifattribtable;
        
}; // IntServMib


class IntServMib::Intsrvgenobjects : public ydk::Entity
{
    public:
        Intsrvgenobjects();
        ~Intsrvgenobjects();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf intsrvflownewindex; //type: int32

}; // IntServMib::Intsrvgenobjects


class IntServMib::Intsrvifattribtable : public ydk::Entity
{
    public:
        Intsrvifattribtable();
        ~Intsrvifattribtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Intsrvifattribentry; //type: IntServMib::Intsrvifattribtable::Intsrvifattribentry

        std::vector<std::shared_ptr<INT_SERV_MIB::IntServMib::Intsrvifattribtable::Intsrvifattribentry> > intsrvifattribentry;
        
}; // IntServMib::Intsrvifattribtable


class IntServMib::Intsrvifattribtable::Intsrvifattribentry : public ydk::Entity
{
    public:
        Intsrvifattribentry();
        ~Intsrvifattribentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf intsrvifattriballocatedbits; //type: int32
        ydk::YLeaf intsrvifattribmaxallocatedbits; //type: int32
        ydk::YLeaf intsrvifattriballocatedbuffer; //type: int32
        ydk::YLeaf intsrvifattribflows; //type: uint32
        ydk::YLeaf intsrvifattribpropagationdelay; //type: int32
        ydk::YLeaf intsrvifattribstatus; //type: Rowstatus

}; // IntServMib::Intsrvifattribtable::Intsrvifattribentry


class IntServMib::Intsrvflowtable : public ydk::Entity
{
    public:
        Intsrvflowtable();
        ~Intsrvflowtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Intsrvflowentry; //type: IntServMib::Intsrvflowtable::Intsrvflowentry

        std::vector<std::shared_ptr<INT_SERV_MIB::IntServMib::Intsrvflowtable::Intsrvflowentry> > intsrvflowentry;
        
}; // IntServMib::Intsrvflowtable


class IntServMib::Intsrvflowtable::Intsrvflowentry : public ydk::Entity
{
    public:
        Intsrvflowentry();
        ~Intsrvflowentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf intsrvflownumber; //type: int32
        ydk::YLeaf intsrvflowtype; //type: int32
        ydk::YLeaf intsrvflowowner; //type: Intsrvflowowner
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
        ydk::YLeaf intsrvflowservice; //type: Qosservice
        ydk::YLeaf intsrvfloworder; //type: int32
        ydk::YLeaf intsrvflowstatus; //type: Rowstatus
        class Intsrvflowowner;

}; // IntServMib::Intsrvflowtable::Intsrvflowentry

class Qosservice : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bestEffort;
        static const ydk::Enum::YLeaf guaranteedDelay;
        static const ydk::Enum::YLeaf controlledLoad;

};

class IntServMib::Intsrvflowtable::Intsrvflowentry::Intsrvflowowner : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf rsvp;
        static const ydk::Enum::YLeaf management;

};


}
}

#endif /* _INT_SERV_MIB_ */

