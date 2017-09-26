#ifndef _CISCO_IP_LOCAL_POOL_MIB_
#define _CISCO_IP_LOCAL_POOL_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_IP_LOCAL_POOL_MIB {

class CISCOIPLOCALPOOLMIB : public ydk::Entity
{
    public:
        CISCOIPLOCALPOOLMIB();
        ~CISCOIPLOCALPOOLMIB();

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

        class Ciplocalpoolconfig; //type: CISCOIPLOCALPOOLMIB::Ciplocalpoolconfig
        class Ciplocalpoolconfigtable; //type: CISCOIPLOCALPOOLMIB::Ciplocalpoolconfigtable
        class Ciplocalpoolgroupcontainstable; //type: CISCOIPLOCALPOOLMIB::Ciplocalpoolgroupcontainstable
        class Ciplocalpoolgrouptable; //type: CISCOIPLOCALPOOLMIB::Ciplocalpoolgrouptable
        class Ciplocalpoolstatstable; //type: CISCOIPLOCALPOOLMIB::Ciplocalpoolstatstable
        class Ciplocalpoolalloctable; //type: CISCOIPLOCALPOOLMIB::Ciplocalpoolalloctable

        std::shared_ptr<cisco_ios_xe::CISCO_IP_LOCAL_POOL_MIB::CISCOIPLOCALPOOLMIB::Ciplocalpoolalloctable> ciplocalpoolalloctable;
        std::shared_ptr<cisco_ios_xe::CISCO_IP_LOCAL_POOL_MIB::CISCOIPLOCALPOOLMIB::Ciplocalpoolconfig> ciplocalpoolconfig;
        std::shared_ptr<cisco_ios_xe::CISCO_IP_LOCAL_POOL_MIB::CISCOIPLOCALPOOLMIB::Ciplocalpoolconfigtable> ciplocalpoolconfigtable;
        std::shared_ptr<cisco_ios_xe::CISCO_IP_LOCAL_POOL_MIB::CISCOIPLOCALPOOLMIB::Ciplocalpoolgroupcontainstable> ciplocalpoolgroupcontainstable;
        std::shared_ptr<cisco_ios_xe::CISCO_IP_LOCAL_POOL_MIB::CISCOIPLOCALPOOLMIB::Ciplocalpoolgrouptable> ciplocalpoolgrouptable;
        std::shared_ptr<cisco_ios_xe::CISCO_IP_LOCAL_POOL_MIB::CISCOIPLOCALPOOLMIB::Ciplocalpoolstatstable> ciplocalpoolstatstable;
        
}; // CISCOIPLOCALPOOLMIB


class CISCOIPLOCALPOOLMIB::Ciplocalpoolalloctable : public ydk::Entity
{
    public:
        Ciplocalpoolalloctable();
        ~Ciplocalpoolalloctable();

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

        class Ciplocalpoolallocentry; //type: CISCOIPLOCALPOOLMIB::Ciplocalpoolalloctable::Ciplocalpoolallocentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_IP_LOCAL_POOL_MIB::CISCOIPLOCALPOOLMIB::Ciplocalpoolalloctable::Ciplocalpoolallocentry> > ciplocalpoolallocentry;
        
}; // CISCOIPLOCALPOOLMIB::Ciplocalpoolalloctable


class CISCOIPLOCALPOOLMIB::Ciplocalpoolalloctable::Ciplocalpoolallocentry : public ydk::Entity
{
    public:
        Ciplocalpoolallocentry();
        ~Ciplocalpoolallocentry();

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

        //type: binary (refers to cisco_ios_xe::CISCO_IP_LOCAL_POOL_MIB::CISCOIPLOCALPOOLMIB::Ciplocalpoolconfigtable::Ciplocalpoolconfigentry::ciplocalpoolname)
        ydk::YLeaf ciplocalpoolname;
        ydk::YLeaf ciplocalpoolallocaddrtype; //type: InetAddressType
        ydk::YLeaf ciplocalpoolallocaddr; //type: binary
        ydk::YLeaf ciplocalpoolallocifindex; //type: int32
        ydk::YLeaf ciplocalpoolallocuser; //type: string

}; // CISCOIPLOCALPOOLMIB::Ciplocalpoolalloctable::Ciplocalpoolallocentry


class CISCOIPLOCALPOOLMIB::Ciplocalpoolconfig : public ydk::Entity
{
    public:
        Ciplocalpoolconfig();
        ~Ciplocalpoolconfig();

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

        ydk::YLeaf ciplocalpoolnotificationsenable; //type: boolean

}; // CISCOIPLOCALPOOLMIB::Ciplocalpoolconfig


class CISCOIPLOCALPOOLMIB::Ciplocalpoolconfigtable : public ydk::Entity
{
    public:
        Ciplocalpoolconfigtable();
        ~Ciplocalpoolconfigtable();

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

        class Ciplocalpoolconfigentry; //type: CISCOIPLOCALPOOLMIB::Ciplocalpoolconfigtable::Ciplocalpoolconfigentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_IP_LOCAL_POOL_MIB::CISCOIPLOCALPOOLMIB::Ciplocalpoolconfigtable::Ciplocalpoolconfigentry> > ciplocalpoolconfigentry;
        
}; // CISCOIPLOCALPOOLMIB::Ciplocalpoolconfigtable


class CISCOIPLOCALPOOLMIB::Ciplocalpoolconfigtable::Ciplocalpoolconfigentry : public ydk::Entity
{
    public:
        Ciplocalpoolconfigentry();
        ~Ciplocalpoolconfigentry();

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

        ydk::YLeaf ciplocalpoolname; //type: binary
        ydk::YLeaf ciplocalpooladdrtype; //type: InetAddressType
        ydk::YLeaf ciplocalpooladdresslo; //type: binary
        ydk::YLeaf ciplocalpooladdresshi; //type: binary
        ydk::YLeaf ciplocalpoolfreeaddrs; //type: uint32
        ydk::YLeaf ciplocalpoolinuseaddrs; //type: uint32
        ydk::YLeaf ciplocalpoolgroupcontainedin; //type: binary
        ydk::YLeaf ciplocalpoolrowstatus; //type: RowStatus
        ydk::YLeaf ciplocalpoolpriority; //type: uint32

}; // CISCOIPLOCALPOOLMIB::Ciplocalpoolconfigtable::Ciplocalpoolconfigentry


class CISCOIPLOCALPOOLMIB::Ciplocalpoolgroupcontainstable : public ydk::Entity
{
    public:
        Ciplocalpoolgroupcontainstable();
        ~Ciplocalpoolgroupcontainstable();

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

        class Ciplocalpoolgroupcontainsentry; //type: CISCOIPLOCALPOOLMIB::Ciplocalpoolgroupcontainstable::Ciplocalpoolgroupcontainsentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_IP_LOCAL_POOL_MIB::CISCOIPLOCALPOOLMIB::Ciplocalpoolgroupcontainstable::Ciplocalpoolgroupcontainsentry> > ciplocalpoolgroupcontainsentry;
        
}; // CISCOIPLOCALPOOLMIB::Ciplocalpoolgroupcontainstable


class CISCOIPLOCALPOOLMIB::Ciplocalpoolgroupcontainstable::Ciplocalpoolgroupcontainsentry : public ydk::Entity
{
    public:
        Ciplocalpoolgroupcontainsentry();
        ~Ciplocalpoolgroupcontainsentry();

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

        ydk::YLeaf ciplocalpoolgroupname; //type: binary
        ydk::YLeaf ciplocalpoolchildindex; //type: binary

}; // CISCOIPLOCALPOOLMIB::Ciplocalpoolgroupcontainstable::Ciplocalpoolgroupcontainsentry


class CISCOIPLOCALPOOLMIB::Ciplocalpoolgrouptable : public ydk::Entity
{
    public:
        Ciplocalpoolgrouptable();
        ~Ciplocalpoolgrouptable();

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

        class Ciplocalpoolgroupentry; //type: CISCOIPLOCALPOOLMIB::Ciplocalpoolgrouptable::Ciplocalpoolgroupentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_IP_LOCAL_POOL_MIB::CISCOIPLOCALPOOLMIB::Ciplocalpoolgrouptable::Ciplocalpoolgroupentry> > ciplocalpoolgroupentry;
        
}; // CISCOIPLOCALPOOLMIB::Ciplocalpoolgrouptable


class CISCOIPLOCALPOOLMIB::Ciplocalpoolgrouptable::Ciplocalpoolgroupentry : public ydk::Entity
{
    public:
        Ciplocalpoolgroupentry();
        ~Ciplocalpoolgroupentry();

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

        //type: binary (refers to cisco_ios_xe::CISCO_IP_LOCAL_POOL_MIB::CISCOIPLOCALPOOLMIB::Ciplocalpoolgroupcontainstable::Ciplocalpoolgroupcontainsentry::ciplocalpoolgroupname)
        ydk::YLeaf ciplocalpoolgroupname;
        ydk::YLeaf ciplocalpoolgroupfreeaddrs; //type: uint32
        ydk::YLeaf ciplocalpoolgroupinuseaddrs; //type: uint32

}; // CISCOIPLOCALPOOLMIB::Ciplocalpoolgrouptable::Ciplocalpoolgroupentry


class CISCOIPLOCALPOOLMIB::Ciplocalpoolstatstable : public ydk::Entity
{
    public:
        Ciplocalpoolstatstable();
        ~Ciplocalpoolstatstable();

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

        class Ciplocalpoolstatsentry; //type: CISCOIPLOCALPOOLMIB::Ciplocalpoolstatstable::Ciplocalpoolstatsentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_IP_LOCAL_POOL_MIB::CISCOIPLOCALPOOLMIB::Ciplocalpoolstatstable::Ciplocalpoolstatsentry> > ciplocalpoolstatsentry;
        
}; // CISCOIPLOCALPOOLMIB::Ciplocalpoolstatstable


class CISCOIPLOCALPOOLMIB::Ciplocalpoolstatstable::Ciplocalpoolstatsentry : public ydk::Entity
{
    public:
        Ciplocalpoolstatsentry();
        ~Ciplocalpoolstatsentry();

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

        //type: binary (refers to cisco_ios_xe::CISCO_IP_LOCAL_POOL_MIB::CISCOIPLOCALPOOLMIB::Ciplocalpoolconfigtable::Ciplocalpoolconfigentry::ciplocalpoolname)
        ydk::YLeaf ciplocalpoolname;
        ydk::YLeaf ciplocalpoolstatfreeaddrs; //type: uint32
        ydk::YLeaf ciplocalpoolstatinuseaddrs; //type: uint32
        ydk::YLeaf ciplocalpoolstathiwaterusedaddrs; //type: uint32
        ydk::YLeaf ciplocalpoolstatinuseaddrthldlo; //type: uint32
        ydk::YLeaf ciplocalpoolstatinuseaddrthldhi; //type: uint32
        ydk::YLeaf ciplocalpoolpercentaddrthldlo; //type: uint32
        ydk::YLeaf ciplocalpoolpercentaddrthldhi; //type: uint32

}; // CISCOIPLOCALPOOLMIB::Ciplocalpoolstatstable::Ciplocalpoolstatsentry


}
}

#endif /* _CISCO_IP_LOCAL_POOL_MIB_ */

