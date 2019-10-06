
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_fia_internal_tcam_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_fia_internal_tcam_oper {

Controller::Controller()
    :
    dpa(std::make_shared<Controller::Dpa>())
{
    dpa->parent = this;

    yang_name = "controller"; yang_parent_name = "Cisco-IOS-XR-fia-internal-tcam-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

Controller::~Controller()
{
}

bool Controller::has_data() const
{
    if (is_presence_container) return true;
    return (dpa !=  nullptr && dpa->has_data());
}

bool Controller::has_operation() const
{
    return is_set(yfilter)
	|| (dpa !=  nullptr && dpa->has_operation());
}

std::string Controller::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fia-internal-tcam-oper:controller";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dpa")
    {
        if(dpa == nullptr)
        {
            dpa = std::make_shared<Controller::Dpa>();
        }
        return dpa;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dpa != nullptr)
    {
        _children["dpa"] = dpa;
    }

    return _children;
}

void Controller::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> Controller::clone_ptr() const
{
    return std::make_shared<Controller>();
}

std::string Controller::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Controller::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Controller::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Controller::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Controller::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dpa")
        return true;
    return false;
}

Controller::Dpa::Dpa()
    :
    nodes(std::make_shared<Controller::Dpa::Nodes>())
{
    nodes->parent = this;

    yang_name = "dpa"; yang_parent_name = "controller"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Dpa::~Dpa()
{
}

bool Controller::Dpa::has_data() const
{
    if (is_presence_container) return true;
    return (nodes !=  nullptr && nodes->has_data());
}

bool Controller::Dpa::has_operation() const
{
    return is_set(yfilter)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string Controller::Dpa::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fia-internal-tcam-oper:controller/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Dpa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dpa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Dpa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Dpa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<Controller::Dpa::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Dpa::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(nodes != nullptr)
    {
        _children["nodes"] = nodes;
    }

    return _children;
}

void Controller::Dpa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Dpa::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Dpa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nodes")
        return true;
    return false;
}

Controller::Dpa::Nodes::Nodes()
    :
    node(this, {"node_name"})
{

    yang_name = "nodes"; yang_parent_name = "dpa"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Dpa::Nodes::~Nodes()
{
}

bool Controller::Dpa::Nodes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Dpa::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Dpa::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fia-internal-tcam-oper:controller/dpa/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Dpa::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Dpa::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Dpa::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        auto ent_ = std::make_shared<Controller::Dpa::Nodes::Node>();
        ent_->parent = this;
        node.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Dpa::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : node.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::Dpa::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Dpa::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Dpa::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

Controller::Dpa::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"}
        ,
    external_tcam_resources(std::make_shared<Controller::Dpa::Nodes::Node::ExternalTcamResources>())
    , internal_tcam_resources(std::make_shared<Controller::Dpa::Nodes::Node::InternalTcamResources>())
{
    external_tcam_resources->parent = this;
    internal_tcam_resources->parent = this;

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Dpa::Nodes::Node::~Node()
{
}

bool Controller::Dpa::Nodes::Node::has_data() const
{
    if (is_presence_container) return true;
    return node_name.is_set
	|| (external_tcam_resources !=  nullptr && external_tcam_resources->has_data())
	|| (internal_tcam_resources !=  nullptr && internal_tcam_resources->has_data());
}

bool Controller::Dpa::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| (external_tcam_resources !=  nullptr && external_tcam_resources->has_operation())
	|| (internal_tcam_resources !=  nullptr && internal_tcam_resources->has_operation());
}

std::string Controller::Dpa::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fia-internal-tcam-oper:controller/dpa/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Dpa::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node";
    ADD_KEY_TOKEN(node_name, "node-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Dpa::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Dpa::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "external-tcam-resources")
    {
        if(external_tcam_resources == nullptr)
        {
            external_tcam_resources = std::make_shared<Controller::Dpa::Nodes::Node::ExternalTcamResources>();
        }
        return external_tcam_resources;
    }

    if(child_yang_name == "internal-tcam-resources")
    {
        if(internal_tcam_resources == nullptr)
        {
            internal_tcam_resources = std::make_shared<Controller::Dpa::Nodes::Node::InternalTcamResources>();
        }
        return internal_tcam_resources;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Dpa::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(external_tcam_resources != nullptr)
    {
        _children["external-tcam-resources"] = external_tcam_resources;
    }

    if(internal_tcam_resources != nullptr)
    {
        _children["internal-tcam-resources"] = internal_tcam_resources;
    }

    return _children;
}

void Controller::Dpa::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Dpa::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
}

bool Controller::Dpa::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external-tcam-resources" || name == "internal-tcam-resources" || name == "node-name")
        return true;
    return false;
}

Controller::Dpa::Nodes::Node::ExternalTcamResources::ExternalTcamResources()
    :
    npu_tcam(this, {})
{

    yang_name = "external-tcam-resources"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Dpa::Nodes::Node::ExternalTcamResources::~ExternalTcamResources()
{
}

bool Controller::Dpa::Nodes::Node::ExternalTcamResources::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<npu_tcam.len(); index++)
    {
        if(npu_tcam[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Dpa::Nodes::Node::ExternalTcamResources::has_operation() const
{
    for (std::size_t index=0; index<npu_tcam.len(); index++)
    {
        if(npu_tcam[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Dpa::Nodes::Node::ExternalTcamResources::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external-tcam-resources";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Dpa::Nodes::Node::ExternalTcamResources::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Dpa::Nodes::Node::ExternalTcamResources::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "npu-tcam")
    {
        auto ent_ = std::make_shared<Controller::Dpa::Nodes::Node::ExternalTcamResources::NpuTcam>();
        ent_->parent = this;
        npu_tcam.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Dpa::Nodes::Node::ExternalTcamResources::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : npu_tcam.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::Dpa::Nodes::Node::ExternalTcamResources::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Dpa::Nodes::Node::ExternalTcamResources::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Dpa::Nodes::Node::ExternalTcamResources::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "npu-tcam")
        return true;
    return false;
}

Controller::Dpa::Nodes::Node::ExternalTcamResources::NpuTcam::NpuTcam()
    :
    npu_id{YType::uint32, "npu-id"}
        ,
    tcam_bank(this, {})
{

    yang_name = "npu-tcam"; yang_parent_name = "external-tcam-resources"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Dpa::Nodes::Node::ExternalTcamResources::NpuTcam::~NpuTcam()
{
}

bool Controller::Dpa::Nodes::Node::ExternalTcamResources::NpuTcam::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tcam_bank.len(); index++)
    {
        if(tcam_bank[index]->has_data())
            return true;
    }
    return npu_id.is_set;
}

bool Controller::Dpa::Nodes::Node::ExternalTcamResources::NpuTcam::has_operation() const
{
    for (std::size_t index=0; index<tcam_bank.len(); index++)
    {
        if(tcam_bank[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(npu_id.yfilter);
}

std::string Controller::Dpa::Nodes::Node::ExternalTcamResources::NpuTcam::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "npu-tcam";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Dpa::Nodes::Node::ExternalTcamResources::NpuTcam::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (npu_id.is_set || is_set(npu_id.yfilter)) leaf_name_data.push_back(npu_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Dpa::Nodes::Node::ExternalTcamResources::NpuTcam::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tcam-bank")
    {
        auto ent_ = std::make_shared<Controller::Dpa::Nodes::Node::ExternalTcamResources::NpuTcam::TcamBank>();
        ent_->parent = this;
        tcam_bank.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Dpa::Nodes::Node::ExternalTcamResources::NpuTcam::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : tcam_bank.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::Dpa::Nodes::Node::ExternalTcamResources::NpuTcam::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "npu-id")
    {
        npu_id = value;
        npu_id.value_namespace = name_space;
        npu_id.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Dpa::Nodes::Node::ExternalTcamResources::NpuTcam::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "npu-id")
    {
        npu_id.yfilter = yfilter;
    }
}

bool Controller::Dpa::Nodes::Node::ExternalTcamResources::NpuTcam::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tcam-bank" || name == "npu-id")
        return true;
    return false;
}

Controller::Dpa::Nodes::Node::ExternalTcamResources::NpuTcam::TcamBank::TcamBank()
    :
    bank_id{YType::str, "bank-id"},
    bank_key_size{YType::str, "bank-key-size"},
    bank_free_entries{YType::uint32, "bank-free-entries"},
    bank_inuse_entries{YType::uint32, "bank-inuse-entries"},
    owner{YType::str, "owner"},
    nof_dbs{YType::uint32, "nof-dbs"}
        ,
    bank_db(this, {})
{

    yang_name = "tcam-bank"; yang_parent_name = "npu-tcam"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Dpa::Nodes::Node::ExternalTcamResources::NpuTcam::TcamBank::~TcamBank()
{
}

bool Controller::Dpa::Nodes::Node::ExternalTcamResources::NpuTcam::TcamBank::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bank_db.len(); index++)
    {
        if(bank_db[index]->has_data())
            return true;
    }
    return bank_id.is_set
	|| bank_key_size.is_set
	|| bank_free_entries.is_set
	|| bank_inuse_entries.is_set
	|| owner.is_set
	|| nof_dbs.is_set;
}

bool Controller::Dpa::Nodes::Node::ExternalTcamResources::NpuTcam::TcamBank::has_operation() const
{
    for (std::size_t index=0; index<bank_db.len(); index++)
    {
        if(bank_db[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(bank_id.yfilter)
	|| ydk::is_set(bank_key_size.yfilter)
	|| ydk::is_set(bank_free_entries.yfilter)
	|| ydk::is_set(bank_inuse_entries.yfilter)
	|| ydk::is_set(owner.yfilter)
	|| ydk::is_set(nof_dbs.yfilter);
}

std::string Controller::Dpa::Nodes::Node::ExternalTcamResources::NpuTcam::TcamBank::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcam-bank";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Dpa::Nodes::Node::ExternalTcamResources::NpuTcam::TcamBank::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bank_id.is_set || is_set(bank_id.yfilter)) leaf_name_data.push_back(bank_id.get_name_leafdata());
    if (bank_key_size.is_set || is_set(bank_key_size.yfilter)) leaf_name_data.push_back(bank_key_size.get_name_leafdata());
    if (bank_free_entries.is_set || is_set(bank_free_entries.yfilter)) leaf_name_data.push_back(bank_free_entries.get_name_leafdata());
    if (bank_inuse_entries.is_set || is_set(bank_inuse_entries.yfilter)) leaf_name_data.push_back(bank_inuse_entries.get_name_leafdata());
    if (owner.is_set || is_set(owner.yfilter)) leaf_name_data.push_back(owner.get_name_leafdata());
    if (nof_dbs.is_set || is_set(nof_dbs.yfilter)) leaf_name_data.push_back(nof_dbs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Dpa::Nodes::Node::ExternalTcamResources::NpuTcam::TcamBank::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bank-db")
    {
        auto ent_ = std::make_shared<Controller::Dpa::Nodes::Node::ExternalTcamResources::NpuTcam::TcamBank::BankDb>();
        ent_->parent = this;
        bank_db.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Dpa::Nodes::Node::ExternalTcamResources::NpuTcam::TcamBank::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bank_db.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::Dpa::Nodes::Node::ExternalTcamResources::NpuTcam::TcamBank::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bank-id")
    {
        bank_id = value;
        bank_id.value_namespace = name_space;
        bank_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bank-key-size")
    {
        bank_key_size = value;
        bank_key_size.value_namespace = name_space;
        bank_key_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bank-free-entries")
    {
        bank_free_entries = value;
        bank_free_entries.value_namespace = name_space;
        bank_free_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bank-inuse-entries")
    {
        bank_inuse_entries = value;
        bank_inuse_entries.value_namespace = name_space;
        bank_inuse_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "owner")
    {
        owner = value;
        owner.value_namespace = name_space;
        owner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nof-dbs")
    {
        nof_dbs = value;
        nof_dbs.value_namespace = name_space;
        nof_dbs.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Dpa::Nodes::Node::ExternalTcamResources::NpuTcam::TcamBank::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bank-id")
    {
        bank_id.yfilter = yfilter;
    }
    if(value_path == "bank-key-size")
    {
        bank_key_size.yfilter = yfilter;
    }
    if(value_path == "bank-free-entries")
    {
        bank_free_entries.yfilter = yfilter;
    }
    if(value_path == "bank-inuse-entries")
    {
        bank_inuse_entries.yfilter = yfilter;
    }
    if(value_path == "owner")
    {
        owner.yfilter = yfilter;
    }
    if(value_path == "nof-dbs")
    {
        nof_dbs.yfilter = yfilter;
    }
}

bool Controller::Dpa::Nodes::Node::ExternalTcamResources::NpuTcam::TcamBank::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bank-db" || name == "bank-id" || name == "bank-key-size" || name == "bank-free-entries" || name == "bank-inuse-entries" || name == "owner" || name == "nof-dbs")
        return true;
    return false;
}

Controller::Dpa::Nodes::Node::ExternalTcamResources::NpuTcam::TcamBank::BankDb::BankDb()
    :
    db_id{YType::uint32, "db-id"},
    db_inuse_entries{YType::uint32, "db-inuse-entries"},
    db_prefix{YType::str, "db-prefix"}
{

    yang_name = "bank-db"; yang_parent_name = "tcam-bank"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Dpa::Nodes::Node::ExternalTcamResources::NpuTcam::TcamBank::BankDb::~BankDb()
{
}

bool Controller::Dpa::Nodes::Node::ExternalTcamResources::NpuTcam::TcamBank::BankDb::has_data() const
{
    if (is_presence_container) return true;
    return db_id.is_set
	|| db_inuse_entries.is_set
	|| db_prefix.is_set;
}

bool Controller::Dpa::Nodes::Node::ExternalTcamResources::NpuTcam::TcamBank::BankDb::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(db_id.yfilter)
	|| ydk::is_set(db_inuse_entries.yfilter)
	|| ydk::is_set(db_prefix.yfilter);
}

std::string Controller::Dpa::Nodes::Node::ExternalTcamResources::NpuTcam::TcamBank::BankDb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bank-db";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Dpa::Nodes::Node::ExternalTcamResources::NpuTcam::TcamBank::BankDb::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (db_id.is_set || is_set(db_id.yfilter)) leaf_name_data.push_back(db_id.get_name_leafdata());
    if (db_inuse_entries.is_set || is_set(db_inuse_entries.yfilter)) leaf_name_data.push_back(db_inuse_entries.get_name_leafdata());
    if (db_prefix.is_set || is_set(db_prefix.yfilter)) leaf_name_data.push_back(db_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Dpa::Nodes::Node::ExternalTcamResources::NpuTcam::TcamBank::BankDb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Dpa::Nodes::Node::ExternalTcamResources::NpuTcam::TcamBank::BankDb::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Dpa::Nodes::Node::ExternalTcamResources::NpuTcam::TcamBank::BankDb::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "db-id")
    {
        db_id = value;
        db_id.value_namespace = name_space;
        db_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "db-inuse-entries")
    {
        db_inuse_entries = value;
        db_inuse_entries.value_namespace = name_space;
        db_inuse_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "db-prefix")
    {
        db_prefix = value;
        db_prefix.value_namespace = name_space;
        db_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Dpa::Nodes::Node::ExternalTcamResources::NpuTcam::TcamBank::BankDb::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "db-id")
    {
        db_id.yfilter = yfilter;
    }
    if(value_path == "db-inuse-entries")
    {
        db_inuse_entries.yfilter = yfilter;
    }
    if(value_path == "db-prefix")
    {
        db_prefix.yfilter = yfilter;
    }
}

bool Controller::Dpa::Nodes::Node::ExternalTcamResources::NpuTcam::TcamBank::BankDb::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "db-id" || name == "db-inuse-entries" || name == "db-prefix")
        return true;
    return false;
}

Controller::Dpa::Nodes::Node::InternalTcamResources::InternalTcamResources()
    :
    npu_tcam(this, {})
{

    yang_name = "internal-tcam-resources"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Dpa::Nodes::Node::InternalTcamResources::~InternalTcamResources()
{
}

bool Controller::Dpa::Nodes::Node::InternalTcamResources::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<npu_tcam.len(); index++)
    {
        if(npu_tcam[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Dpa::Nodes::Node::InternalTcamResources::has_operation() const
{
    for (std::size_t index=0; index<npu_tcam.len(); index++)
    {
        if(npu_tcam[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Dpa::Nodes::Node::InternalTcamResources::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "internal-tcam-resources";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Dpa::Nodes::Node::InternalTcamResources::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Dpa::Nodes::Node::InternalTcamResources::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "npu-tcam")
    {
        auto ent_ = std::make_shared<Controller::Dpa::Nodes::Node::InternalTcamResources::NpuTcam>();
        ent_->parent = this;
        npu_tcam.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Dpa::Nodes::Node::InternalTcamResources::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : npu_tcam.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::Dpa::Nodes::Node::InternalTcamResources::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Dpa::Nodes::Node::InternalTcamResources::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Dpa::Nodes::Node::InternalTcamResources::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "npu-tcam")
        return true;
    return false;
}

Controller::Dpa::Nodes::Node::InternalTcamResources::NpuTcam::NpuTcam()
    :
    npu_id{YType::uint32, "npu-id"}
        ,
    tcam_bank(this, {})
{

    yang_name = "npu-tcam"; yang_parent_name = "internal-tcam-resources"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Dpa::Nodes::Node::InternalTcamResources::NpuTcam::~NpuTcam()
{
}

bool Controller::Dpa::Nodes::Node::InternalTcamResources::NpuTcam::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tcam_bank.len(); index++)
    {
        if(tcam_bank[index]->has_data())
            return true;
    }
    return npu_id.is_set;
}

bool Controller::Dpa::Nodes::Node::InternalTcamResources::NpuTcam::has_operation() const
{
    for (std::size_t index=0; index<tcam_bank.len(); index++)
    {
        if(tcam_bank[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(npu_id.yfilter);
}

std::string Controller::Dpa::Nodes::Node::InternalTcamResources::NpuTcam::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "npu-tcam";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Dpa::Nodes::Node::InternalTcamResources::NpuTcam::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (npu_id.is_set || is_set(npu_id.yfilter)) leaf_name_data.push_back(npu_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Dpa::Nodes::Node::InternalTcamResources::NpuTcam::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tcam-bank")
    {
        auto ent_ = std::make_shared<Controller::Dpa::Nodes::Node::InternalTcamResources::NpuTcam::TcamBank>();
        ent_->parent = this;
        tcam_bank.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Dpa::Nodes::Node::InternalTcamResources::NpuTcam::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : tcam_bank.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::Dpa::Nodes::Node::InternalTcamResources::NpuTcam::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "npu-id")
    {
        npu_id = value;
        npu_id.value_namespace = name_space;
        npu_id.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Dpa::Nodes::Node::InternalTcamResources::NpuTcam::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "npu-id")
    {
        npu_id.yfilter = yfilter;
    }
}

bool Controller::Dpa::Nodes::Node::InternalTcamResources::NpuTcam::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tcam-bank" || name == "npu-id")
        return true;
    return false;
}

Controller::Dpa::Nodes::Node::InternalTcamResources::NpuTcam::TcamBank::TcamBank()
    :
    bank_id{YType::str, "bank-id"},
    bank_key_size{YType::str, "bank-key-size"},
    bank_free_entries{YType::uint32, "bank-free-entries"},
    bank_inuse_entries{YType::uint32, "bank-inuse-entries"},
    owner{YType::str, "owner"},
    nof_dbs{YType::uint32, "nof-dbs"}
        ,
    bank_db(this, {})
{

    yang_name = "tcam-bank"; yang_parent_name = "npu-tcam"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Dpa::Nodes::Node::InternalTcamResources::NpuTcam::TcamBank::~TcamBank()
{
}

bool Controller::Dpa::Nodes::Node::InternalTcamResources::NpuTcam::TcamBank::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bank_db.len(); index++)
    {
        if(bank_db[index]->has_data())
            return true;
    }
    return bank_id.is_set
	|| bank_key_size.is_set
	|| bank_free_entries.is_set
	|| bank_inuse_entries.is_set
	|| owner.is_set
	|| nof_dbs.is_set;
}

bool Controller::Dpa::Nodes::Node::InternalTcamResources::NpuTcam::TcamBank::has_operation() const
{
    for (std::size_t index=0; index<bank_db.len(); index++)
    {
        if(bank_db[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(bank_id.yfilter)
	|| ydk::is_set(bank_key_size.yfilter)
	|| ydk::is_set(bank_free_entries.yfilter)
	|| ydk::is_set(bank_inuse_entries.yfilter)
	|| ydk::is_set(owner.yfilter)
	|| ydk::is_set(nof_dbs.yfilter);
}

std::string Controller::Dpa::Nodes::Node::InternalTcamResources::NpuTcam::TcamBank::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcam-bank";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Dpa::Nodes::Node::InternalTcamResources::NpuTcam::TcamBank::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bank_id.is_set || is_set(bank_id.yfilter)) leaf_name_data.push_back(bank_id.get_name_leafdata());
    if (bank_key_size.is_set || is_set(bank_key_size.yfilter)) leaf_name_data.push_back(bank_key_size.get_name_leafdata());
    if (bank_free_entries.is_set || is_set(bank_free_entries.yfilter)) leaf_name_data.push_back(bank_free_entries.get_name_leafdata());
    if (bank_inuse_entries.is_set || is_set(bank_inuse_entries.yfilter)) leaf_name_data.push_back(bank_inuse_entries.get_name_leafdata());
    if (owner.is_set || is_set(owner.yfilter)) leaf_name_data.push_back(owner.get_name_leafdata());
    if (nof_dbs.is_set || is_set(nof_dbs.yfilter)) leaf_name_data.push_back(nof_dbs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Dpa::Nodes::Node::InternalTcamResources::NpuTcam::TcamBank::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bank-db")
    {
        auto ent_ = std::make_shared<Controller::Dpa::Nodes::Node::InternalTcamResources::NpuTcam::TcamBank::BankDb>();
        ent_->parent = this;
        bank_db.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Dpa::Nodes::Node::InternalTcamResources::NpuTcam::TcamBank::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bank_db.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::Dpa::Nodes::Node::InternalTcamResources::NpuTcam::TcamBank::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bank-id")
    {
        bank_id = value;
        bank_id.value_namespace = name_space;
        bank_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bank-key-size")
    {
        bank_key_size = value;
        bank_key_size.value_namespace = name_space;
        bank_key_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bank-free-entries")
    {
        bank_free_entries = value;
        bank_free_entries.value_namespace = name_space;
        bank_free_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bank-inuse-entries")
    {
        bank_inuse_entries = value;
        bank_inuse_entries.value_namespace = name_space;
        bank_inuse_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "owner")
    {
        owner = value;
        owner.value_namespace = name_space;
        owner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nof-dbs")
    {
        nof_dbs = value;
        nof_dbs.value_namespace = name_space;
        nof_dbs.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Dpa::Nodes::Node::InternalTcamResources::NpuTcam::TcamBank::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bank-id")
    {
        bank_id.yfilter = yfilter;
    }
    if(value_path == "bank-key-size")
    {
        bank_key_size.yfilter = yfilter;
    }
    if(value_path == "bank-free-entries")
    {
        bank_free_entries.yfilter = yfilter;
    }
    if(value_path == "bank-inuse-entries")
    {
        bank_inuse_entries.yfilter = yfilter;
    }
    if(value_path == "owner")
    {
        owner.yfilter = yfilter;
    }
    if(value_path == "nof-dbs")
    {
        nof_dbs.yfilter = yfilter;
    }
}

bool Controller::Dpa::Nodes::Node::InternalTcamResources::NpuTcam::TcamBank::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bank-db" || name == "bank-id" || name == "bank-key-size" || name == "bank-free-entries" || name == "bank-inuse-entries" || name == "owner" || name == "nof-dbs")
        return true;
    return false;
}

Controller::Dpa::Nodes::Node::InternalTcamResources::NpuTcam::TcamBank::BankDb::BankDb()
    :
    db_id{YType::uint32, "db-id"},
    db_inuse_entries{YType::uint32, "db-inuse-entries"},
    db_prefix{YType::str, "db-prefix"}
{

    yang_name = "bank-db"; yang_parent_name = "tcam-bank"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Dpa::Nodes::Node::InternalTcamResources::NpuTcam::TcamBank::BankDb::~BankDb()
{
}

bool Controller::Dpa::Nodes::Node::InternalTcamResources::NpuTcam::TcamBank::BankDb::has_data() const
{
    if (is_presence_container) return true;
    return db_id.is_set
	|| db_inuse_entries.is_set
	|| db_prefix.is_set;
}

bool Controller::Dpa::Nodes::Node::InternalTcamResources::NpuTcam::TcamBank::BankDb::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(db_id.yfilter)
	|| ydk::is_set(db_inuse_entries.yfilter)
	|| ydk::is_set(db_prefix.yfilter);
}

std::string Controller::Dpa::Nodes::Node::InternalTcamResources::NpuTcam::TcamBank::BankDb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bank-db";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Dpa::Nodes::Node::InternalTcamResources::NpuTcam::TcamBank::BankDb::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (db_id.is_set || is_set(db_id.yfilter)) leaf_name_data.push_back(db_id.get_name_leafdata());
    if (db_inuse_entries.is_set || is_set(db_inuse_entries.yfilter)) leaf_name_data.push_back(db_inuse_entries.get_name_leafdata());
    if (db_prefix.is_set || is_set(db_prefix.yfilter)) leaf_name_data.push_back(db_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Dpa::Nodes::Node::InternalTcamResources::NpuTcam::TcamBank::BankDb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Dpa::Nodes::Node::InternalTcamResources::NpuTcam::TcamBank::BankDb::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Dpa::Nodes::Node::InternalTcamResources::NpuTcam::TcamBank::BankDb::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "db-id")
    {
        db_id = value;
        db_id.value_namespace = name_space;
        db_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "db-inuse-entries")
    {
        db_inuse_entries = value;
        db_inuse_entries.value_namespace = name_space;
        db_inuse_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "db-prefix")
    {
        db_prefix = value;
        db_prefix.value_namespace = name_space;
        db_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Dpa::Nodes::Node::InternalTcamResources::NpuTcam::TcamBank::BankDb::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "db-id")
    {
        db_id.yfilter = yfilter;
    }
    if(value_path == "db-inuse-entries")
    {
        db_inuse_entries.yfilter = yfilter;
    }
    if(value_path == "db-prefix")
    {
        db_prefix.yfilter = yfilter;
    }
}

bool Controller::Dpa::Nodes::Node::InternalTcamResources::NpuTcam::TcamBank::BankDb::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "db-id" || name == "db-inuse-entries" || name == "db-prefix")
        return true;
    return false;
}


}
}

