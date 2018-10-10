#ifndef _CLAB_TOPO_MIB_
#define _CLAB_TOPO_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CLAB_TOPO_MIB {

class CLABTOPOMIB : public ydk::Entity
{
    public:
        CLABTOPOMIB();
        ~CLABTOPOMIB();

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

        class ClabTopoFiberNodeCfgTable; //type: CLABTOPOMIB::ClabTopoFiberNodeCfgTable
        class ClabTopoChFnCfgTable; //type: CLABTOPOMIB::ClabTopoChFnCfgTable

        std::shared_ptr<cisco_ios_xe::CLAB_TOPO_MIB::CLABTOPOMIB::ClabTopoFiberNodeCfgTable> clabtopofibernodecfgtable;
        std::shared_ptr<cisco_ios_xe::CLAB_TOPO_MIB::CLABTOPOMIB::ClabTopoChFnCfgTable> clabtopochfncfgtable;
        
}; // CLABTOPOMIB


class CLABTOPOMIB::ClabTopoFiberNodeCfgTable : public ydk::Entity
{
    public:
        ClabTopoFiberNodeCfgTable();
        ~ClabTopoFiberNodeCfgTable();

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

        class ClabTopoFiberNodeCfgEntry; //type: CLABTOPOMIB::ClabTopoFiberNodeCfgTable::ClabTopoFiberNodeCfgEntry

        ydk::YList clabtopofibernodecfgentry;
        
}; // CLABTOPOMIB::ClabTopoFiberNodeCfgTable


class CLABTOPOMIB::ClabTopoFiberNodeCfgTable::ClabTopoFiberNodeCfgEntry : public ydk::Entity
{
    public:
        ClabTopoFiberNodeCfgEntry();
        ~ClabTopoFiberNodeCfgEntry();

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

        ydk::YLeaf clabtopofibernodecfgnodename; //type: binary
        ydk::YLeaf clabtopofibernodecfgnodedescr; //type: string
        ydk::YLeaf clabtopofibernodecfgrowstatus; //type: RowStatus

}; // CLABTOPOMIB::ClabTopoFiberNodeCfgTable::ClabTopoFiberNodeCfgEntry


class CLABTOPOMIB::ClabTopoChFnCfgTable : public ydk::Entity
{
    public:
        ClabTopoChFnCfgTable();
        ~ClabTopoChFnCfgTable();

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

        class ClabTopoChFnCfgEntry; //type: CLABTOPOMIB::ClabTopoChFnCfgTable::ClabTopoChFnCfgEntry

        ydk::YList clabtopochfncfgentry;
        
}; // CLABTOPOMIB::ClabTopoChFnCfgTable


class CLABTOPOMIB::ClabTopoChFnCfgTable::ClabTopoChFnCfgEntry : public ydk::Entity
{
    public:
        ClabTopoChFnCfgEntry();
        ~ClabTopoChFnCfgEntry();

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

        //type: binary (refers to cisco_ios_xe::CLAB_TOPO_MIB::CLABTOPOMIB::ClabTopoFiberNodeCfgTable::ClabTopoFiberNodeCfgEntry::clabtopofibernodecfgnodename)
        ydk::YLeaf clabtopofibernodecfgnodename;
        ydk::YLeaf clabtopochfncfgchifindex; //type: int32
        ydk::YLeaf clabtopochfncfgrowstatus; //type: RowStatus

}; // CLABTOPOMIB::ClabTopoChFnCfgTable::ClabTopoChFnCfgEntry


}
}

#endif /* _CLAB_TOPO_MIB_ */

