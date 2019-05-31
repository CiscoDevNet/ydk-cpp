
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_eigrp_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_eigrp_oper {

Eigrp::Eigrp()
    :
    processes(std::make_shared<Eigrp::Processes>())
{
    processes->parent = this;

    yang_name = "eigrp"; yang_parent_name = "Cisco-IOS-XR-eigrp-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

Eigrp::~Eigrp()
{
}

bool Eigrp::has_data() const
{
    if (is_presence_container) return true;
    return (processes !=  nullptr && processes->has_data());
}

bool Eigrp::has_operation() const
{
    return is_set(yfilter)
	|| (processes !=  nullptr && processes->has_operation());
}

std::string Eigrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-eigrp-oper:eigrp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "processes")
    {
        if(processes == nullptr)
        {
            processes = std::make_shared<Eigrp::Processes>();
        }
        return processes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(processes != nullptr)
    {
        _children["processes"] = processes;
    }

    return _children;
}

void Eigrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Eigrp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> Eigrp::clone_ptr() const
{
    return std::make_shared<Eigrp>();
}

std::string Eigrp::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Eigrp::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Eigrp::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Eigrp::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Eigrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "processes")
        return true;
    return false;
}

Eigrp::Processes::Processes()
    :
    process(this, {"process_id"})
{

    yang_name = "processes"; yang_parent_name = "eigrp"; is_top_level_class = false; has_list_ancestor = false; 
}

Eigrp::Processes::~Processes()
{
}

bool Eigrp::Processes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<process.len(); index++)
    {
        if(process[index]->has_data())
            return true;
    }
    return false;
}

bool Eigrp::Processes::has_operation() const
{
    for (std::size_t index=0; index<process.len(); index++)
    {
        if(process[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Eigrp::Processes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-eigrp-oper:eigrp/" << get_segment_path();
    return path_buffer.str();
}

std::string Eigrp::Processes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "processes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "process")
    {
        auto ent_ = std::make_shared<Eigrp::Processes::Process>();
        ent_->parent = this;
        process.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : process.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Eigrp::Processes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Eigrp::Processes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Eigrp::Processes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "process")
        return true;
    return false;
}

Eigrp::Processes::Process::Process()
    :
    process_id{YType::str, "process-id"}
        ,
    vrfs_xr(std::make_shared<Eigrp::Processes::Process::VrfsXr>())
    , vrfs(std::make_shared<Eigrp::Processes::Process::Vrfs>())
{
    vrfs_xr->parent = this;
    vrfs->parent = this;

    yang_name = "process"; yang_parent_name = "processes"; is_top_level_class = false; has_list_ancestor = false; 
}

Eigrp::Processes::Process::~Process()
{
}

bool Eigrp::Processes::Process::has_data() const
{
    if (is_presence_container) return true;
    return process_id.is_set
	|| (vrfs_xr !=  nullptr && vrfs_xr->has_data())
	|| (vrfs !=  nullptr && vrfs->has_data());
}

bool Eigrp::Processes::Process::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(process_id.yfilter)
	|| (vrfs_xr !=  nullptr && vrfs_xr->has_operation())
	|| (vrfs !=  nullptr && vrfs->has_operation());
}

std::string Eigrp::Processes::Process::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-eigrp-oper:eigrp/processes/" << get_segment_path();
    return path_buffer.str();
}

std::string Eigrp::Processes::Process::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process";
    ADD_KEY_TOKEN(process_id, "process-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (process_id.is_set || is_set(process_id.yfilter)) leaf_name_data.push_back(process_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrfs-xr")
    {
        if(vrfs_xr == nullptr)
        {
            vrfs_xr = std::make_shared<Eigrp::Processes::Process::VrfsXr>();
        }
        return vrfs_xr;
    }

    if(child_yang_name == "vrfs")
    {
        if(vrfs == nullptr)
        {
            vrfs = std::make_shared<Eigrp::Processes::Process::Vrfs>();
        }
        return vrfs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vrfs_xr != nullptr)
    {
        _children["vrfs-xr"] = vrfs_xr;
    }

    if(vrfs != nullptr)
    {
        _children["vrfs"] = vrfs;
    }

    return _children;
}

void Eigrp::Processes::Process::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "process-id")
    {
        process_id = value;
        process_id.value_namespace = name_space;
        process_id.value_namespace_prefix = name_space_prefix;
    }
}

void Eigrp::Processes::Process::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "process-id")
    {
        process_id.yfilter = yfilter;
    }
}

bool Eigrp::Processes::Process::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrfs-xr" || name == "vrfs" || name == "process-id")
        return true;
    return false;
}

Eigrp::Processes::Process::VrfsXr::VrfsXr()
    :
    vrf(this, {"vrf_name"})
{

    yang_name = "vrfs-xr"; yang_parent_name = "process"; is_top_level_class = false; has_list_ancestor = true; 
}

Eigrp::Processes::Process::VrfsXr::~VrfsXr()
{
}

bool Eigrp::Processes::Process::VrfsXr::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Eigrp::Processes::Process::VrfsXr::has_operation() const
{
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Eigrp::Processes::Process::VrfsXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::VrfsXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::VrfsXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        auto ent_ = std::make_shared<Eigrp::Processes::Process::VrfsXr::Vrf>();
        ent_->parent = this;
        vrf.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::VrfsXr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vrf.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Eigrp::Processes::Process::VrfsXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Eigrp::Processes::Process::VrfsXr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Eigrp::Processes::Process::VrfsXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

Eigrp::Processes::Process::VrfsXr::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"},
    vrf_name_xr{YType::str, "vrf-name-xr"}
{

    yang_name = "vrf"; yang_parent_name = "vrfs-xr"; is_top_level_class = false; has_list_ancestor = true; 
}

Eigrp::Processes::Process::VrfsXr::Vrf::~Vrf()
{
}

bool Eigrp::Processes::Process::VrfsXr::Vrf::has_data() const
{
    if (is_presence_container) return true;
    return vrf_name.is_set
	|| vrf_name_xr.is_set;
}

bool Eigrp::Processes::Process::VrfsXr::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(vrf_name_xr.yfilter);
}

std::string Eigrp::Processes::Process::VrfsXr::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    ADD_KEY_TOKEN(vrf_name, "vrf-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::VrfsXr::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (vrf_name_xr.is_set || is_set(vrf_name_xr.yfilter)) leaf_name_data.push_back(vrf_name_xr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::VrfsXr::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::VrfsXr::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Eigrp::Processes::Process::VrfsXr::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name-xr")
    {
        vrf_name_xr = value;
        vrf_name_xr.value_namespace = name_space;
        vrf_name_xr.value_namespace_prefix = name_space_prefix;
    }
}

void Eigrp::Processes::Process::VrfsXr::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "vrf-name-xr")
    {
        vrf_name_xr.yfilter = yfilter;
    }
}

bool Eigrp::Processes::Process::VrfsXr::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-name" || name == "vrf-name-xr")
        return true;
    return false;
}

Eigrp::Processes::Process::Vrfs::Vrfs()
    :
    vrf(this, {"vrf_name"})
{

    yang_name = "vrfs"; yang_parent_name = "process"; is_top_level_class = false; has_list_ancestor = true; 
}

Eigrp::Processes::Process::Vrfs::~Vrfs()
{
}

bool Eigrp::Processes::Process::Vrfs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Eigrp::Processes::Process::Vrfs::has_operation() const
{
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Eigrp::Processes::Process::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::Vrfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        auto ent_ = std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf>();
        ent_->parent = this;
        vrf.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::Vrfs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vrf.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Eigrp::Processes::Process::Vrfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Eigrp::Processes::Process::Vrfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Eigrp::Processes::Process::Vrfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

Eigrp::Processes::Process::Vrfs::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"}
        ,
    afs(std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs>())
{
    afs->parent = this;

    yang_name = "vrf"; yang_parent_name = "vrfs"; is_top_level_class = false; has_list_ancestor = true; 
}

Eigrp::Processes::Process::Vrfs::Vrf::~Vrf()
{
}

bool Eigrp::Processes::Process::Vrfs::Vrf::has_data() const
{
    if (is_presence_container) return true;
    return vrf_name.is_set
	|| (afs !=  nullptr && afs->has_data());
}

bool Eigrp::Processes::Process::Vrfs::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (afs !=  nullptr && afs->has_operation());
}

std::string Eigrp::Processes::Process::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    ADD_KEY_TOKEN(vrf_name, "vrf-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::Vrfs::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "afs")
    {
        if(afs == nullptr)
        {
            afs = std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs>();
        }
        return afs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::Vrfs::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(afs != nullptr)
    {
        _children["afs"] = afs;
    }

    return _children;
}

void Eigrp::Processes::Process::Vrfs::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Eigrp::Processes::Process::Vrfs::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Eigrp::Processes::Process::Vrfs::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afs" || name == "vrf-name")
        return true;
    return false;
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Afs()
    :
    af(this, {"af_name"})
{

    yang_name = "afs"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::~Afs()
{
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<af.len(); index++)
    {
        if(af[index]->has_data())
            return true;
    }
    return false;
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::has_operation() const
{
    for (std::size_t index=0; index<af.len(); index++)
    {
        if(af[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Eigrp::Processes::Process::Vrfs::Vrf::Afs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "afs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::Vrfs::Vrf::Afs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::Vrfs::Vrf::Afs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "af")
    {
        auto ent_ = std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af>();
        ent_->parent = this;
        af.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::Vrfs::Vrf::Afs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : af.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af")
        return true;
    return false;
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Af()
    :
    af_name{YType::enumeration, "af-name"}
        ,
    protocol(std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Protocol>())
    , ases(std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases>())
{
    protocol->parent = this;
    ases->parent = this;

    yang_name = "af"; yang_parent_name = "afs"; is_top_level_class = false; has_list_ancestor = true; 
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::~Af()
{
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| (protocol !=  nullptr && protocol->has_data())
	|| (ases !=  nullptr && ases->has_data());
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| (protocol !=  nullptr && protocol->has_operation())
	|| (ases !=  nullptr && ases->has_operation());
}

std::string Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af";
    ADD_KEY_TOKEN(af_name, "af-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol")
    {
        if(protocol == nullptr)
        {
            protocol = std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Protocol>();
        }
        return protocol;
    }

    if(child_yang_name == "ases")
    {
        if(ases == nullptr)
        {
            ases = std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases>();
        }
        return ases;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(protocol != nullptr)
    {
        _children["protocol"] = protocol;
    }

    if(ases != nullptr)
    {
        _children["ases"] = ases;
    }

    return _children;
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol" || name == "ases" || name == "af-name")
        return true;
    return false;
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Protocol::Protocol()
    :
    afi{YType::uint32, "afi"},
    as_number{YType::uint32, "as-number"},
    router_id{YType::str, "router-id"},
    auto_summarization{YType::boolean, "auto-summarization"},
    log_neighbor_changes{YType::boolean, "log-neighbor-changes"},
    log_neighbor_warnings{YType::boolean, "log-neighbor-warnings"},
    rib_table_limit_reached{YType::boolean, "rib-table-limit-reached"},
    outbound_filter_policy{YType::str, "outbound-filter-policy"},
    inbound_filter_policy{YType::str, "inbound-filter-policy"},
    outgoing_candidate_default_flagged{YType::boolean, "outgoing-candidate-default-flagged"},
    outgoing_candidate_default_policy{YType::str, "outgoing-candidate-default-policy"},
    incoming_candidate_default_flagged{YType::boolean, "incoming-candidate-default-flagged"},
    incoming_candidate_default_policy{YType::str, "incoming-candidate-default-policy"},
    internal_distance{YType::uint8, "internal-distance"},
    external_distance{YType::uint8, "external-distance"},
    maximum_paths{YType::uint8, "maximum-paths"},
    variance{YType::uint8, "variance"},
    metric_weight_k1{YType::uint32, "metric-weight-k1"},
    metric_weight_k2{YType::uint32, "metric-weight-k2"},
    metric_weight_k3{YType::uint32, "metric-weight-k3"},
    metric_weight_k4{YType::uint32, "metric-weight-k4"},
    metric_weight_k5{YType::uint32, "metric-weight-k5"},
    metric_weight_k6{YType::uint32, "metric-weight-k6"},
    rib_scale{YType::uint32, "rib-scale"},
    metric_version{YType::enumeration, "metric-version"},
    metric_maximum_hopcount{YType::uint32, "metric-maximum-hopcount"},
    default_metric_configured{YType::boolean, "default-metric-configured"},
    default_bandwidth{YType::uint32, "default-bandwidth"},
    default_delay{YType::uint32, "default-delay"},
    default_reliability{YType::uint32, "default-reliability"},
    default_load{YType::uint32, "default-load"},
    default_mtu{YType::uint32, "default-mtu"},
    stub_configured{YType::boolean, "stub-configured"},
    stub_receive_only{YType::boolean, "stub-receive-only"},
    stub_allow_connected_routes{YType::boolean, "stub-allow-connected-routes"},
    stub_allow_static_routes{YType::boolean, "stub-allow-static-routes"},
    stub_allow_summary_routes{YType::boolean, "stub-allow-summary-routes"},
    stub_allow_redistributed_routes{YType::boolean, "stub-allow-redistributed-routes"},
    nsf_enabled{YType::boolean, "nsf-enabled"},
    nsf_route_hold_time{YType::uint32, "nsf-route-hold-time"},
    nsf_signal_time{YType::uint32, "nsf-signal-time"},
    nsf_converge_time{YType::uint32, "nsf-converge-time"},
    restart_configured{YType::boolean, "restart-configured"},
    restart_time{YType::uint32, "restart-time"},
    sia_active_time{YType::uint32, "sia-active-time"},
    rib_protocol_id{YType::uint32, "rib-protocol-id"},
    table_id{YType::uint32, "table-id"},
    vrf_id{YType::uint32, "vrf-id"},
    ital_activation_received{YType::boolean, "ital-activation-received"},
    vrf_activated{YType::boolean, "vrf-activated"},
    up{YType::boolean, "up"},
    rib_initialized{YType::boolean, "rib-initialized"},
    rib_converged{YType::boolean, "rib-converged"},
    rib_converged_reload{YType::boolean, "rib-converged-reload"},
    socket_request{YType::boolean, "socket-request"},
    socket_setup{YType::boolean, "socket-setup"},
    default_vrf{YType::boolean, "default-vrf"},
    af_enabled{YType::boolean, "af-enabled"},
    is_passive_default{YType::boolean, "is-passive-default"},
    configured_items{YType::uint32, "configured-items"},
    af_configured_items{YType::uint32, "af-configured-items"},
    ip_arm_router_id{YType::uint32, "ip-arm-router-id"},
    first_interface_up_address{YType::uint32, "first-interface-up-address"},
    nsf_in_progress{YType::uint32, "nsf-in-progress"},
    rib_table_converged{YType::uint32, "rib-table-converged"}
        ,
    redistributed_protocol(this, {})
    , interface(this, {})
{

    yang_name = "protocol"; yang_parent_name = "af"; is_top_level_class = false; has_list_ancestor = true; 
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Protocol::~Protocol()
{
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Protocol::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<redistributed_protocol.len(); index++)
    {
        if(redistributed_protocol[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return afi.is_set
	|| as_number.is_set
	|| router_id.is_set
	|| auto_summarization.is_set
	|| log_neighbor_changes.is_set
	|| log_neighbor_warnings.is_set
	|| rib_table_limit_reached.is_set
	|| outbound_filter_policy.is_set
	|| inbound_filter_policy.is_set
	|| outgoing_candidate_default_flagged.is_set
	|| outgoing_candidate_default_policy.is_set
	|| incoming_candidate_default_flagged.is_set
	|| incoming_candidate_default_policy.is_set
	|| internal_distance.is_set
	|| external_distance.is_set
	|| maximum_paths.is_set
	|| variance.is_set
	|| metric_weight_k1.is_set
	|| metric_weight_k2.is_set
	|| metric_weight_k3.is_set
	|| metric_weight_k4.is_set
	|| metric_weight_k5.is_set
	|| metric_weight_k6.is_set
	|| rib_scale.is_set
	|| metric_version.is_set
	|| metric_maximum_hopcount.is_set
	|| default_metric_configured.is_set
	|| default_bandwidth.is_set
	|| default_delay.is_set
	|| default_reliability.is_set
	|| default_load.is_set
	|| default_mtu.is_set
	|| stub_configured.is_set
	|| stub_receive_only.is_set
	|| stub_allow_connected_routes.is_set
	|| stub_allow_static_routes.is_set
	|| stub_allow_summary_routes.is_set
	|| stub_allow_redistributed_routes.is_set
	|| nsf_enabled.is_set
	|| nsf_route_hold_time.is_set
	|| nsf_signal_time.is_set
	|| nsf_converge_time.is_set
	|| restart_configured.is_set
	|| restart_time.is_set
	|| sia_active_time.is_set
	|| rib_protocol_id.is_set
	|| table_id.is_set
	|| vrf_id.is_set
	|| ital_activation_received.is_set
	|| vrf_activated.is_set
	|| up.is_set
	|| rib_initialized.is_set
	|| rib_converged.is_set
	|| rib_converged_reload.is_set
	|| socket_request.is_set
	|| socket_setup.is_set
	|| default_vrf.is_set
	|| af_enabled.is_set
	|| is_passive_default.is_set
	|| configured_items.is_set
	|| af_configured_items.is_set
	|| ip_arm_router_id.is_set
	|| first_interface_up_address.is_set
	|| nsf_in_progress.is_set
	|| rib_table_converged.is_set;
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Protocol::has_operation() const
{
    for (std::size_t index=0; index<redistributed_protocol.len(); index++)
    {
        if(redistributed_protocol[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(as_number.yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(auto_summarization.yfilter)
	|| ydk::is_set(log_neighbor_changes.yfilter)
	|| ydk::is_set(log_neighbor_warnings.yfilter)
	|| ydk::is_set(rib_table_limit_reached.yfilter)
	|| ydk::is_set(outbound_filter_policy.yfilter)
	|| ydk::is_set(inbound_filter_policy.yfilter)
	|| ydk::is_set(outgoing_candidate_default_flagged.yfilter)
	|| ydk::is_set(outgoing_candidate_default_policy.yfilter)
	|| ydk::is_set(incoming_candidate_default_flagged.yfilter)
	|| ydk::is_set(incoming_candidate_default_policy.yfilter)
	|| ydk::is_set(internal_distance.yfilter)
	|| ydk::is_set(external_distance.yfilter)
	|| ydk::is_set(maximum_paths.yfilter)
	|| ydk::is_set(variance.yfilter)
	|| ydk::is_set(metric_weight_k1.yfilter)
	|| ydk::is_set(metric_weight_k2.yfilter)
	|| ydk::is_set(metric_weight_k3.yfilter)
	|| ydk::is_set(metric_weight_k4.yfilter)
	|| ydk::is_set(metric_weight_k5.yfilter)
	|| ydk::is_set(metric_weight_k6.yfilter)
	|| ydk::is_set(rib_scale.yfilter)
	|| ydk::is_set(metric_version.yfilter)
	|| ydk::is_set(metric_maximum_hopcount.yfilter)
	|| ydk::is_set(default_metric_configured.yfilter)
	|| ydk::is_set(default_bandwidth.yfilter)
	|| ydk::is_set(default_delay.yfilter)
	|| ydk::is_set(default_reliability.yfilter)
	|| ydk::is_set(default_load.yfilter)
	|| ydk::is_set(default_mtu.yfilter)
	|| ydk::is_set(stub_configured.yfilter)
	|| ydk::is_set(stub_receive_only.yfilter)
	|| ydk::is_set(stub_allow_connected_routes.yfilter)
	|| ydk::is_set(stub_allow_static_routes.yfilter)
	|| ydk::is_set(stub_allow_summary_routes.yfilter)
	|| ydk::is_set(stub_allow_redistributed_routes.yfilter)
	|| ydk::is_set(nsf_enabled.yfilter)
	|| ydk::is_set(nsf_route_hold_time.yfilter)
	|| ydk::is_set(nsf_signal_time.yfilter)
	|| ydk::is_set(nsf_converge_time.yfilter)
	|| ydk::is_set(restart_configured.yfilter)
	|| ydk::is_set(restart_time.yfilter)
	|| ydk::is_set(sia_active_time.yfilter)
	|| ydk::is_set(rib_protocol_id.yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(vrf_id.yfilter)
	|| ydk::is_set(ital_activation_received.yfilter)
	|| ydk::is_set(vrf_activated.yfilter)
	|| ydk::is_set(up.yfilter)
	|| ydk::is_set(rib_initialized.yfilter)
	|| ydk::is_set(rib_converged.yfilter)
	|| ydk::is_set(rib_converged_reload.yfilter)
	|| ydk::is_set(socket_request.yfilter)
	|| ydk::is_set(socket_setup.yfilter)
	|| ydk::is_set(default_vrf.yfilter)
	|| ydk::is_set(af_enabled.yfilter)
	|| ydk::is_set(is_passive_default.yfilter)
	|| ydk::is_set(configured_items.yfilter)
	|| ydk::is_set(af_configured_items.yfilter)
	|| ydk::is_set(ip_arm_router_id.yfilter)
	|| ydk::is_set(first_interface_up_address.yfilter)
	|| ydk::is_set(nsf_in_progress.yfilter)
	|| ydk::is_set(rib_table_converged.yfilter);
}

std::string Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Protocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (auto_summarization.is_set || is_set(auto_summarization.yfilter)) leaf_name_data.push_back(auto_summarization.get_name_leafdata());
    if (log_neighbor_changes.is_set || is_set(log_neighbor_changes.yfilter)) leaf_name_data.push_back(log_neighbor_changes.get_name_leafdata());
    if (log_neighbor_warnings.is_set || is_set(log_neighbor_warnings.yfilter)) leaf_name_data.push_back(log_neighbor_warnings.get_name_leafdata());
    if (rib_table_limit_reached.is_set || is_set(rib_table_limit_reached.yfilter)) leaf_name_data.push_back(rib_table_limit_reached.get_name_leafdata());
    if (outbound_filter_policy.is_set || is_set(outbound_filter_policy.yfilter)) leaf_name_data.push_back(outbound_filter_policy.get_name_leafdata());
    if (inbound_filter_policy.is_set || is_set(inbound_filter_policy.yfilter)) leaf_name_data.push_back(inbound_filter_policy.get_name_leafdata());
    if (outgoing_candidate_default_flagged.is_set || is_set(outgoing_candidate_default_flagged.yfilter)) leaf_name_data.push_back(outgoing_candidate_default_flagged.get_name_leafdata());
    if (outgoing_candidate_default_policy.is_set || is_set(outgoing_candidate_default_policy.yfilter)) leaf_name_data.push_back(outgoing_candidate_default_policy.get_name_leafdata());
    if (incoming_candidate_default_flagged.is_set || is_set(incoming_candidate_default_flagged.yfilter)) leaf_name_data.push_back(incoming_candidate_default_flagged.get_name_leafdata());
    if (incoming_candidate_default_policy.is_set || is_set(incoming_candidate_default_policy.yfilter)) leaf_name_data.push_back(incoming_candidate_default_policy.get_name_leafdata());
    if (internal_distance.is_set || is_set(internal_distance.yfilter)) leaf_name_data.push_back(internal_distance.get_name_leafdata());
    if (external_distance.is_set || is_set(external_distance.yfilter)) leaf_name_data.push_back(external_distance.get_name_leafdata());
    if (maximum_paths.is_set || is_set(maximum_paths.yfilter)) leaf_name_data.push_back(maximum_paths.get_name_leafdata());
    if (variance.is_set || is_set(variance.yfilter)) leaf_name_data.push_back(variance.get_name_leafdata());
    if (metric_weight_k1.is_set || is_set(metric_weight_k1.yfilter)) leaf_name_data.push_back(metric_weight_k1.get_name_leafdata());
    if (metric_weight_k2.is_set || is_set(metric_weight_k2.yfilter)) leaf_name_data.push_back(metric_weight_k2.get_name_leafdata());
    if (metric_weight_k3.is_set || is_set(metric_weight_k3.yfilter)) leaf_name_data.push_back(metric_weight_k3.get_name_leafdata());
    if (metric_weight_k4.is_set || is_set(metric_weight_k4.yfilter)) leaf_name_data.push_back(metric_weight_k4.get_name_leafdata());
    if (metric_weight_k5.is_set || is_set(metric_weight_k5.yfilter)) leaf_name_data.push_back(metric_weight_k5.get_name_leafdata());
    if (metric_weight_k6.is_set || is_set(metric_weight_k6.yfilter)) leaf_name_data.push_back(metric_weight_k6.get_name_leafdata());
    if (rib_scale.is_set || is_set(rib_scale.yfilter)) leaf_name_data.push_back(rib_scale.get_name_leafdata());
    if (metric_version.is_set || is_set(metric_version.yfilter)) leaf_name_data.push_back(metric_version.get_name_leafdata());
    if (metric_maximum_hopcount.is_set || is_set(metric_maximum_hopcount.yfilter)) leaf_name_data.push_back(metric_maximum_hopcount.get_name_leafdata());
    if (default_metric_configured.is_set || is_set(default_metric_configured.yfilter)) leaf_name_data.push_back(default_metric_configured.get_name_leafdata());
    if (default_bandwidth.is_set || is_set(default_bandwidth.yfilter)) leaf_name_data.push_back(default_bandwidth.get_name_leafdata());
    if (default_delay.is_set || is_set(default_delay.yfilter)) leaf_name_data.push_back(default_delay.get_name_leafdata());
    if (default_reliability.is_set || is_set(default_reliability.yfilter)) leaf_name_data.push_back(default_reliability.get_name_leafdata());
    if (default_load.is_set || is_set(default_load.yfilter)) leaf_name_data.push_back(default_load.get_name_leafdata());
    if (default_mtu.is_set || is_set(default_mtu.yfilter)) leaf_name_data.push_back(default_mtu.get_name_leafdata());
    if (stub_configured.is_set || is_set(stub_configured.yfilter)) leaf_name_data.push_back(stub_configured.get_name_leafdata());
    if (stub_receive_only.is_set || is_set(stub_receive_only.yfilter)) leaf_name_data.push_back(stub_receive_only.get_name_leafdata());
    if (stub_allow_connected_routes.is_set || is_set(stub_allow_connected_routes.yfilter)) leaf_name_data.push_back(stub_allow_connected_routes.get_name_leafdata());
    if (stub_allow_static_routes.is_set || is_set(stub_allow_static_routes.yfilter)) leaf_name_data.push_back(stub_allow_static_routes.get_name_leafdata());
    if (stub_allow_summary_routes.is_set || is_set(stub_allow_summary_routes.yfilter)) leaf_name_data.push_back(stub_allow_summary_routes.get_name_leafdata());
    if (stub_allow_redistributed_routes.is_set || is_set(stub_allow_redistributed_routes.yfilter)) leaf_name_data.push_back(stub_allow_redistributed_routes.get_name_leafdata());
    if (nsf_enabled.is_set || is_set(nsf_enabled.yfilter)) leaf_name_data.push_back(nsf_enabled.get_name_leafdata());
    if (nsf_route_hold_time.is_set || is_set(nsf_route_hold_time.yfilter)) leaf_name_data.push_back(nsf_route_hold_time.get_name_leafdata());
    if (nsf_signal_time.is_set || is_set(nsf_signal_time.yfilter)) leaf_name_data.push_back(nsf_signal_time.get_name_leafdata());
    if (nsf_converge_time.is_set || is_set(nsf_converge_time.yfilter)) leaf_name_data.push_back(nsf_converge_time.get_name_leafdata());
    if (restart_configured.is_set || is_set(restart_configured.yfilter)) leaf_name_data.push_back(restart_configured.get_name_leafdata());
    if (restart_time.is_set || is_set(restart_time.yfilter)) leaf_name_data.push_back(restart_time.get_name_leafdata());
    if (sia_active_time.is_set || is_set(sia_active_time.yfilter)) leaf_name_data.push_back(sia_active_time.get_name_leafdata());
    if (rib_protocol_id.is_set || is_set(rib_protocol_id.yfilter)) leaf_name_data.push_back(rib_protocol_id.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (vrf_id.is_set || is_set(vrf_id.yfilter)) leaf_name_data.push_back(vrf_id.get_name_leafdata());
    if (ital_activation_received.is_set || is_set(ital_activation_received.yfilter)) leaf_name_data.push_back(ital_activation_received.get_name_leafdata());
    if (vrf_activated.is_set || is_set(vrf_activated.yfilter)) leaf_name_data.push_back(vrf_activated.get_name_leafdata());
    if (up.is_set || is_set(up.yfilter)) leaf_name_data.push_back(up.get_name_leafdata());
    if (rib_initialized.is_set || is_set(rib_initialized.yfilter)) leaf_name_data.push_back(rib_initialized.get_name_leafdata());
    if (rib_converged.is_set || is_set(rib_converged.yfilter)) leaf_name_data.push_back(rib_converged.get_name_leafdata());
    if (rib_converged_reload.is_set || is_set(rib_converged_reload.yfilter)) leaf_name_data.push_back(rib_converged_reload.get_name_leafdata());
    if (socket_request.is_set || is_set(socket_request.yfilter)) leaf_name_data.push_back(socket_request.get_name_leafdata());
    if (socket_setup.is_set || is_set(socket_setup.yfilter)) leaf_name_data.push_back(socket_setup.get_name_leafdata());
    if (default_vrf.is_set || is_set(default_vrf.yfilter)) leaf_name_data.push_back(default_vrf.get_name_leafdata());
    if (af_enabled.is_set || is_set(af_enabled.yfilter)) leaf_name_data.push_back(af_enabled.get_name_leafdata());
    if (is_passive_default.is_set || is_set(is_passive_default.yfilter)) leaf_name_data.push_back(is_passive_default.get_name_leafdata());
    if (configured_items.is_set || is_set(configured_items.yfilter)) leaf_name_data.push_back(configured_items.get_name_leafdata());
    if (af_configured_items.is_set || is_set(af_configured_items.yfilter)) leaf_name_data.push_back(af_configured_items.get_name_leafdata());
    if (ip_arm_router_id.is_set || is_set(ip_arm_router_id.yfilter)) leaf_name_data.push_back(ip_arm_router_id.get_name_leafdata());
    if (first_interface_up_address.is_set || is_set(first_interface_up_address.yfilter)) leaf_name_data.push_back(first_interface_up_address.get_name_leafdata());
    if (nsf_in_progress.is_set || is_set(nsf_in_progress.yfilter)) leaf_name_data.push_back(nsf_in_progress.get_name_leafdata());
    if (rib_table_converged.is_set || is_set(rib_table_converged.yfilter)) leaf_name_data.push_back(rib_table_converged.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redistributed-protocol")
    {
        auto ent_ = std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Protocol::RedistributedProtocol>();
        ent_->parent = this;
        redistributed_protocol.append(ent_);
        return ent_;
    }

    if(child_yang_name == "interface")
    {
        auto ent_ = std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Protocol::Interface>();
        ent_->parent = this;
        interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : redistributed_protocol.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Protocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-summarization")
    {
        auto_summarization = value;
        auto_summarization.value_namespace = name_space;
        auto_summarization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-neighbor-changes")
    {
        log_neighbor_changes = value;
        log_neighbor_changes.value_namespace = name_space;
        log_neighbor_changes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-neighbor-warnings")
    {
        log_neighbor_warnings = value;
        log_neighbor_warnings.value_namespace = name_space;
        log_neighbor_warnings.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-table-limit-reached")
    {
        rib_table_limit_reached = value;
        rib_table_limit_reached.value_namespace = name_space;
        rib_table_limit_reached.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outbound-filter-policy")
    {
        outbound_filter_policy = value;
        outbound_filter_policy.value_namespace = name_space;
        outbound_filter_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inbound-filter-policy")
    {
        inbound_filter_policy = value;
        inbound_filter_policy.value_namespace = name_space;
        inbound_filter_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-candidate-default-flagged")
    {
        outgoing_candidate_default_flagged = value;
        outgoing_candidate_default_flagged.value_namespace = name_space;
        outgoing_candidate_default_flagged.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-candidate-default-policy")
    {
        outgoing_candidate_default_policy = value;
        outgoing_candidate_default_policy.value_namespace = name_space;
        outgoing_candidate_default_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-candidate-default-flagged")
    {
        incoming_candidate_default_flagged = value;
        incoming_candidate_default_flagged.value_namespace = name_space;
        incoming_candidate_default_flagged.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-candidate-default-policy")
    {
        incoming_candidate_default_policy = value;
        incoming_candidate_default_policy.value_namespace = name_space;
        incoming_candidate_default_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-distance")
    {
        internal_distance = value;
        internal_distance.value_namespace = name_space;
        internal_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-distance")
    {
        external_distance = value;
        external_distance.value_namespace = name_space;
        external_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-paths")
    {
        maximum_paths = value;
        maximum_paths.value_namespace = name_space;
        maximum_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "variance")
    {
        variance = value;
        variance.value_namespace = name_space;
        variance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-weight-k1")
    {
        metric_weight_k1 = value;
        metric_weight_k1.value_namespace = name_space;
        metric_weight_k1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-weight-k2")
    {
        metric_weight_k2 = value;
        metric_weight_k2.value_namespace = name_space;
        metric_weight_k2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-weight-k3")
    {
        metric_weight_k3 = value;
        metric_weight_k3.value_namespace = name_space;
        metric_weight_k3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-weight-k4")
    {
        metric_weight_k4 = value;
        metric_weight_k4.value_namespace = name_space;
        metric_weight_k4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-weight-k5")
    {
        metric_weight_k5 = value;
        metric_weight_k5.value_namespace = name_space;
        metric_weight_k5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-weight-k6")
    {
        metric_weight_k6 = value;
        metric_weight_k6.value_namespace = name_space;
        metric_weight_k6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-scale")
    {
        rib_scale = value;
        rib_scale.value_namespace = name_space;
        rib_scale.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-version")
    {
        metric_version = value;
        metric_version.value_namespace = name_space;
        metric_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-maximum-hopcount")
    {
        metric_maximum_hopcount = value;
        metric_maximum_hopcount.value_namespace = name_space;
        metric_maximum_hopcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-metric-configured")
    {
        default_metric_configured = value;
        default_metric_configured.value_namespace = name_space;
        default_metric_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-bandwidth")
    {
        default_bandwidth = value;
        default_bandwidth.value_namespace = name_space;
        default_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-delay")
    {
        default_delay = value;
        default_delay.value_namespace = name_space;
        default_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-reliability")
    {
        default_reliability = value;
        default_reliability.value_namespace = name_space;
        default_reliability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-load")
    {
        default_load = value;
        default_load.value_namespace = name_space;
        default_load.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-mtu")
    {
        default_mtu = value;
        default_mtu.value_namespace = name_space;
        default_mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stub-configured")
    {
        stub_configured = value;
        stub_configured.value_namespace = name_space;
        stub_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stub-receive-only")
    {
        stub_receive_only = value;
        stub_receive_only.value_namespace = name_space;
        stub_receive_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stub-allow-connected-routes")
    {
        stub_allow_connected_routes = value;
        stub_allow_connected_routes.value_namespace = name_space;
        stub_allow_connected_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stub-allow-static-routes")
    {
        stub_allow_static_routes = value;
        stub_allow_static_routes.value_namespace = name_space;
        stub_allow_static_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stub-allow-summary-routes")
    {
        stub_allow_summary_routes = value;
        stub_allow_summary_routes.value_namespace = name_space;
        stub_allow_summary_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stub-allow-redistributed-routes")
    {
        stub_allow_redistributed_routes = value;
        stub_allow_redistributed_routes.value_namespace = name_space;
        stub_allow_redistributed_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsf-enabled")
    {
        nsf_enabled = value;
        nsf_enabled.value_namespace = name_space;
        nsf_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsf-route-hold-time")
    {
        nsf_route_hold_time = value;
        nsf_route_hold_time.value_namespace = name_space;
        nsf_route_hold_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsf-signal-time")
    {
        nsf_signal_time = value;
        nsf_signal_time.value_namespace = name_space;
        nsf_signal_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsf-converge-time")
    {
        nsf_converge_time = value;
        nsf_converge_time.value_namespace = name_space;
        nsf_converge_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-configured")
    {
        restart_configured = value;
        restart_configured.value_namespace = name_space;
        restart_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-time")
    {
        restart_time = value;
        restart_time.value_namespace = name_space;
        restart_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sia-active-time")
    {
        sia_active_time = value;
        sia_active_time.value_namespace = name_space;
        sia_active_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-protocol-id")
    {
        rib_protocol_id = value;
        rib_protocol_id.value_namespace = name_space;
        rib_protocol_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-id")
    {
        vrf_id = value;
        vrf_id.value_namespace = name_space;
        vrf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ital-activation-received")
    {
        ital_activation_received = value;
        ital_activation_received.value_namespace = name_space;
        ital_activation_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-activated")
    {
        vrf_activated = value;
        vrf_activated.value_namespace = name_space;
        vrf_activated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up")
    {
        up = value;
        up.value_namespace = name_space;
        up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-initialized")
    {
        rib_initialized = value;
        rib_initialized.value_namespace = name_space;
        rib_initialized.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-converged")
    {
        rib_converged = value;
        rib_converged.value_namespace = name_space;
        rib_converged.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-converged-reload")
    {
        rib_converged_reload = value;
        rib_converged_reload.value_namespace = name_space;
        rib_converged_reload.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "socket-request")
    {
        socket_request = value;
        socket_request.value_namespace = name_space;
        socket_request.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "socket-setup")
    {
        socket_setup = value;
        socket_setup.value_namespace = name_space;
        socket_setup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-vrf")
    {
        default_vrf = value;
        default_vrf.value_namespace = name_space;
        default_vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af-enabled")
    {
        af_enabled = value;
        af_enabled.value_namespace = name_space;
        af_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-passive-default")
    {
        is_passive_default = value;
        is_passive_default.value_namespace = name_space;
        is_passive_default.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-items")
    {
        configured_items = value;
        configured_items.value_namespace = name_space;
        configured_items.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af-configured-items")
    {
        af_configured_items = value;
        af_configured_items.value_namespace = name_space;
        af_configured_items.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-arm-router-id")
    {
        ip_arm_router_id = value;
        ip_arm_router_id.value_namespace = name_space;
        ip_arm_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "first-interface-up-address")
    {
        first_interface_up_address = value;
        first_interface_up_address.value_namespace = name_space;
        first_interface_up_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsf-in-progress")
    {
        nsf_in_progress = value;
        nsf_in_progress.value_namespace = name_space;
        nsf_in_progress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-table-converged")
    {
        rib_table_converged = value;
        rib_table_converged.value_namespace = name_space;
        rib_table_converged.value_namespace_prefix = name_space_prefix;
    }
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Protocol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "auto-summarization")
    {
        auto_summarization.yfilter = yfilter;
    }
    if(value_path == "log-neighbor-changes")
    {
        log_neighbor_changes.yfilter = yfilter;
    }
    if(value_path == "log-neighbor-warnings")
    {
        log_neighbor_warnings.yfilter = yfilter;
    }
    if(value_path == "rib-table-limit-reached")
    {
        rib_table_limit_reached.yfilter = yfilter;
    }
    if(value_path == "outbound-filter-policy")
    {
        outbound_filter_policy.yfilter = yfilter;
    }
    if(value_path == "inbound-filter-policy")
    {
        inbound_filter_policy.yfilter = yfilter;
    }
    if(value_path == "outgoing-candidate-default-flagged")
    {
        outgoing_candidate_default_flagged.yfilter = yfilter;
    }
    if(value_path == "outgoing-candidate-default-policy")
    {
        outgoing_candidate_default_policy.yfilter = yfilter;
    }
    if(value_path == "incoming-candidate-default-flagged")
    {
        incoming_candidate_default_flagged.yfilter = yfilter;
    }
    if(value_path == "incoming-candidate-default-policy")
    {
        incoming_candidate_default_policy.yfilter = yfilter;
    }
    if(value_path == "internal-distance")
    {
        internal_distance.yfilter = yfilter;
    }
    if(value_path == "external-distance")
    {
        external_distance.yfilter = yfilter;
    }
    if(value_path == "maximum-paths")
    {
        maximum_paths.yfilter = yfilter;
    }
    if(value_path == "variance")
    {
        variance.yfilter = yfilter;
    }
    if(value_path == "metric-weight-k1")
    {
        metric_weight_k1.yfilter = yfilter;
    }
    if(value_path == "metric-weight-k2")
    {
        metric_weight_k2.yfilter = yfilter;
    }
    if(value_path == "metric-weight-k3")
    {
        metric_weight_k3.yfilter = yfilter;
    }
    if(value_path == "metric-weight-k4")
    {
        metric_weight_k4.yfilter = yfilter;
    }
    if(value_path == "metric-weight-k5")
    {
        metric_weight_k5.yfilter = yfilter;
    }
    if(value_path == "metric-weight-k6")
    {
        metric_weight_k6.yfilter = yfilter;
    }
    if(value_path == "rib-scale")
    {
        rib_scale.yfilter = yfilter;
    }
    if(value_path == "metric-version")
    {
        metric_version.yfilter = yfilter;
    }
    if(value_path == "metric-maximum-hopcount")
    {
        metric_maximum_hopcount.yfilter = yfilter;
    }
    if(value_path == "default-metric-configured")
    {
        default_metric_configured.yfilter = yfilter;
    }
    if(value_path == "default-bandwidth")
    {
        default_bandwidth.yfilter = yfilter;
    }
    if(value_path == "default-delay")
    {
        default_delay.yfilter = yfilter;
    }
    if(value_path == "default-reliability")
    {
        default_reliability.yfilter = yfilter;
    }
    if(value_path == "default-load")
    {
        default_load.yfilter = yfilter;
    }
    if(value_path == "default-mtu")
    {
        default_mtu.yfilter = yfilter;
    }
    if(value_path == "stub-configured")
    {
        stub_configured.yfilter = yfilter;
    }
    if(value_path == "stub-receive-only")
    {
        stub_receive_only.yfilter = yfilter;
    }
    if(value_path == "stub-allow-connected-routes")
    {
        stub_allow_connected_routes.yfilter = yfilter;
    }
    if(value_path == "stub-allow-static-routes")
    {
        stub_allow_static_routes.yfilter = yfilter;
    }
    if(value_path == "stub-allow-summary-routes")
    {
        stub_allow_summary_routes.yfilter = yfilter;
    }
    if(value_path == "stub-allow-redistributed-routes")
    {
        stub_allow_redistributed_routes.yfilter = yfilter;
    }
    if(value_path == "nsf-enabled")
    {
        nsf_enabled.yfilter = yfilter;
    }
    if(value_path == "nsf-route-hold-time")
    {
        nsf_route_hold_time.yfilter = yfilter;
    }
    if(value_path == "nsf-signal-time")
    {
        nsf_signal_time.yfilter = yfilter;
    }
    if(value_path == "nsf-converge-time")
    {
        nsf_converge_time.yfilter = yfilter;
    }
    if(value_path == "restart-configured")
    {
        restart_configured.yfilter = yfilter;
    }
    if(value_path == "restart-time")
    {
        restart_time.yfilter = yfilter;
    }
    if(value_path == "sia-active-time")
    {
        sia_active_time.yfilter = yfilter;
    }
    if(value_path == "rib-protocol-id")
    {
        rib_protocol_id.yfilter = yfilter;
    }
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
    if(value_path == "vrf-id")
    {
        vrf_id.yfilter = yfilter;
    }
    if(value_path == "ital-activation-received")
    {
        ital_activation_received.yfilter = yfilter;
    }
    if(value_path == "vrf-activated")
    {
        vrf_activated.yfilter = yfilter;
    }
    if(value_path == "up")
    {
        up.yfilter = yfilter;
    }
    if(value_path == "rib-initialized")
    {
        rib_initialized.yfilter = yfilter;
    }
    if(value_path == "rib-converged")
    {
        rib_converged.yfilter = yfilter;
    }
    if(value_path == "rib-converged-reload")
    {
        rib_converged_reload.yfilter = yfilter;
    }
    if(value_path == "socket-request")
    {
        socket_request.yfilter = yfilter;
    }
    if(value_path == "socket-setup")
    {
        socket_setup.yfilter = yfilter;
    }
    if(value_path == "default-vrf")
    {
        default_vrf.yfilter = yfilter;
    }
    if(value_path == "af-enabled")
    {
        af_enabled.yfilter = yfilter;
    }
    if(value_path == "is-passive-default")
    {
        is_passive_default.yfilter = yfilter;
    }
    if(value_path == "configured-items")
    {
        configured_items.yfilter = yfilter;
    }
    if(value_path == "af-configured-items")
    {
        af_configured_items.yfilter = yfilter;
    }
    if(value_path == "ip-arm-router-id")
    {
        ip_arm_router_id.yfilter = yfilter;
    }
    if(value_path == "first-interface-up-address")
    {
        first_interface_up_address.yfilter = yfilter;
    }
    if(value_path == "nsf-in-progress")
    {
        nsf_in_progress.yfilter = yfilter;
    }
    if(value_path == "rib-table-converged")
    {
        rib_table_converged.yfilter = yfilter;
    }
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Protocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redistributed-protocol" || name == "interface" || name == "afi" || name == "as-number" || name == "router-id" || name == "auto-summarization" || name == "log-neighbor-changes" || name == "log-neighbor-warnings" || name == "rib-table-limit-reached" || name == "outbound-filter-policy" || name == "inbound-filter-policy" || name == "outgoing-candidate-default-flagged" || name == "outgoing-candidate-default-policy" || name == "incoming-candidate-default-flagged" || name == "incoming-candidate-default-policy" || name == "internal-distance" || name == "external-distance" || name == "maximum-paths" || name == "variance" || name == "metric-weight-k1" || name == "metric-weight-k2" || name == "metric-weight-k3" || name == "metric-weight-k4" || name == "metric-weight-k5" || name == "metric-weight-k6" || name == "rib-scale" || name == "metric-version" || name == "metric-maximum-hopcount" || name == "default-metric-configured" || name == "default-bandwidth" || name == "default-delay" || name == "default-reliability" || name == "default-load" || name == "default-mtu" || name == "stub-configured" || name == "stub-receive-only" || name == "stub-allow-connected-routes" || name == "stub-allow-static-routes" || name == "stub-allow-summary-routes" || name == "stub-allow-redistributed-routes" || name == "nsf-enabled" || name == "nsf-route-hold-time" || name == "nsf-signal-time" || name == "nsf-converge-time" || name == "restart-configured" || name == "restart-time" || name == "sia-active-time" || name == "rib-protocol-id" || name == "table-id" || name == "vrf-id" || name == "ital-activation-received" || name == "vrf-activated" || name == "up" || name == "rib-initialized" || name == "rib-converged" || name == "rib-converged-reload" || name == "socket-request" || name == "socket-setup" || name == "default-vrf" || name == "af-enabled" || name == "is-passive-default" || name == "configured-items" || name == "af-configured-items" || name == "ip-arm-router-id" || name == "first-interface-up-address" || name == "nsf-in-progress" || name == "rib-table-converged")
        return true;
    return false;
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Protocol::RedistributedProtocol::RedistributedProtocol()
    :
    afi{YType::uint32, "afi"},
    redistributed_protocol{YType::str, "redistributed-protocol"},
    redistributed_protocol_tag{YType::str, "redistributed-protocol-tag"},
    redristribute_policy{YType::str, "redristribute-policy"},
    redistribute_protocol_id{YType::uint32, "redistribute-protocol-id"},
    rib_handle{YType::uint32, "rib-handle"}
{

    yang_name = "redistributed-protocol"; yang_parent_name = "protocol"; is_top_level_class = false; has_list_ancestor = true; 
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Protocol::RedistributedProtocol::~RedistributedProtocol()
{
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Protocol::RedistributedProtocol::has_data() const
{
    if (is_presence_container) return true;
    return afi.is_set
	|| redistributed_protocol.is_set
	|| redistributed_protocol_tag.is_set
	|| redristribute_policy.is_set
	|| redistribute_protocol_id.is_set
	|| rib_handle.is_set;
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Protocol::RedistributedProtocol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(redistributed_protocol.yfilter)
	|| ydk::is_set(redistributed_protocol_tag.yfilter)
	|| ydk::is_set(redristribute_policy.yfilter)
	|| ydk::is_set(redistribute_protocol_id.yfilter)
	|| ydk::is_set(rib_handle.yfilter);
}

std::string Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Protocol::RedistributedProtocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistributed-protocol";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Protocol::RedistributedProtocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (redistributed_protocol.is_set || is_set(redistributed_protocol.yfilter)) leaf_name_data.push_back(redistributed_protocol.get_name_leafdata());
    if (redistributed_protocol_tag.is_set || is_set(redistributed_protocol_tag.yfilter)) leaf_name_data.push_back(redistributed_protocol_tag.get_name_leafdata());
    if (redristribute_policy.is_set || is_set(redristribute_policy.yfilter)) leaf_name_data.push_back(redristribute_policy.get_name_leafdata());
    if (redistribute_protocol_id.is_set || is_set(redistribute_protocol_id.yfilter)) leaf_name_data.push_back(redistribute_protocol_id.get_name_leafdata());
    if (rib_handle.is_set || is_set(rib_handle.yfilter)) leaf_name_data.push_back(rib_handle.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Protocol::RedistributedProtocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Protocol::RedistributedProtocol::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Protocol::RedistributedProtocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redistributed-protocol")
    {
        redistributed_protocol = value;
        redistributed_protocol.value_namespace = name_space;
        redistributed_protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redistributed-protocol-tag")
    {
        redistributed_protocol_tag = value;
        redistributed_protocol_tag.value_namespace = name_space;
        redistributed_protocol_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redristribute-policy")
    {
        redristribute_policy = value;
        redristribute_policy.value_namespace = name_space;
        redristribute_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redistribute-protocol-id")
    {
        redistribute_protocol_id = value;
        redistribute_protocol_id.value_namespace = name_space;
        redistribute_protocol_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-handle")
    {
        rib_handle = value;
        rib_handle.value_namespace = name_space;
        rib_handle.value_namespace_prefix = name_space_prefix;
    }
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Protocol::RedistributedProtocol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "redistributed-protocol")
    {
        redistributed_protocol.yfilter = yfilter;
    }
    if(value_path == "redistributed-protocol-tag")
    {
        redistributed_protocol_tag.yfilter = yfilter;
    }
    if(value_path == "redristribute-policy")
    {
        redristribute_policy.yfilter = yfilter;
    }
    if(value_path == "redistribute-protocol-id")
    {
        redistribute_protocol_id.yfilter = yfilter;
    }
    if(value_path == "rib-handle")
    {
        rib_handle.yfilter = yfilter;
    }
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Protocol::RedistributedProtocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi" || name == "redistributed-protocol" || name == "redistributed-protocol-tag" || name == "redristribute-policy" || name == "redistribute-protocol-id" || name == "rib-handle")
        return true;
    return false;
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Protocol::Interface::Interface()
    :
    afi{YType::uint32, "afi"},
    interface{YType::str, "interface"},
    outbound_filter_policy{YType::str, "outbound-filter-policy"},
    inbound_filter_policy{YType::str, "inbound-filter-policy"},
    inactive{YType::boolean, "inactive"},
    passive_interface{YType::boolean, "passive-interface"}
{

    yang_name = "interface"; yang_parent_name = "protocol"; is_top_level_class = false; has_list_ancestor = true; 
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Protocol::Interface::~Interface()
{
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Protocol::Interface::has_data() const
{
    if (is_presence_container) return true;
    return afi.is_set
	|| interface.is_set
	|| outbound_filter_policy.is_set
	|| inbound_filter_policy.is_set
	|| inactive.is_set
	|| passive_interface.is_set;
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Protocol::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(outbound_filter_policy.yfilter)
	|| ydk::is_set(inbound_filter_policy.yfilter)
	|| ydk::is_set(inactive.yfilter)
	|| ydk::is_set(passive_interface.yfilter);
}

std::string Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Protocol::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Protocol::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (outbound_filter_policy.is_set || is_set(outbound_filter_policy.yfilter)) leaf_name_data.push_back(outbound_filter_policy.get_name_leafdata());
    if (inbound_filter_policy.is_set || is_set(inbound_filter_policy.yfilter)) leaf_name_data.push_back(inbound_filter_policy.get_name_leafdata());
    if (inactive.is_set || is_set(inactive.yfilter)) leaf_name_data.push_back(inactive.get_name_leafdata());
    if (passive_interface.is_set || is_set(passive_interface.yfilter)) leaf_name_data.push_back(passive_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Protocol::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Protocol::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Protocol::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outbound-filter-policy")
    {
        outbound_filter_policy = value;
        outbound_filter_policy.value_namespace = name_space;
        outbound_filter_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inbound-filter-policy")
    {
        inbound_filter_policy = value;
        inbound_filter_policy.value_namespace = name_space;
        inbound_filter_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inactive")
    {
        inactive = value;
        inactive.value_namespace = name_space;
        inactive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passive-interface")
    {
        passive_interface = value;
        passive_interface.value_namespace = name_space;
        passive_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Protocol::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "outbound-filter-policy")
    {
        outbound_filter_policy.yfilter = yfilter;
    }
    if(value_path == "inbound-filter-policy")
    {
        inbound_filter_policy.yfilter = yfilter;
    }
    if(value_path == "inactive")
    {
        inactive.yfilter = yfilter;
    }
    if(value_path == "passive-interface")
    {
        passive_interface.yfilter = yfilter;
    }
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Protocol::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi" || name == "interface" || name == "outbound-filter-policy" || name == "inbound-filter-policy" || name == "inactive" || name == "passive-interface")
        return true;
    return false;
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::Ases()
    :
    as(this, {"asn"})
{

    yang_name = "ases"; yang_parent_name = "af"; is_top_level_class = false; has_list_ancestor = true; 
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::~Ases()
{
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<as.len(); index++)
    {
        if(as[index]->has_data())
            return true;
    }
    return false;
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::has_operation() const
{
    for (std::size_t index=0; index<as.len(); index++)
    {
        if(as[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ases";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "as")
    {
        auto ent_ = std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As>();
        ent_->parent = this;
        as.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : as.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as")
        return true;
    return false;
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::As()
    :
    asn{YType::uint32, "asn"}
        ,
    static_neighbors(std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::StaticNeighbors>())
    , topology_routes(std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes>())
    , eigrp_accounting(std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpAccounting>())
    , eigrp_traffic(std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpTraffic>())
    , eigrp_topology_summary(std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpTopologySummary>())
    , interfaces(std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::Interfaces>())
    , eigrp_events(std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpEvents>())
    , neighbors(std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::Neighbors>())
    , eigrp_statistics(std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpStatistics>())
{
    static_neighbors->parent = this;
    topology_routes->parent = this;
    eigrp_accounting->parent = this;
    eigrp_traffic->parent = this;
    eigrp_topology_summary->parent = this;
    interfaces->parent = this;
    eigrp_events->parent = this;
    neighbors->parent = this;
    eigrp_statistics->parent = this;

    yang_name = "as"; yang_parent_name = "ases"; is_top_level_class = false; has_list_ancestor = true; 
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::~As()
{
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::has_data() const
{
    if (is_presence_container) return true;
    return asn.is_set
	|| (static_neighbors !=  nullptr && static_neighbors->has_data())
	|| (topology_routes !=  nullptr && topology_routes->has_data())
	|| (eigrp_accounting !=  nullptr && eigrp_accounting->has_data())
	|| (eigrp_traffic !=  nullptr && eigrp_traffic->has_data())
	|| (eigrp_topology_summary !=  nullptr && eigrp_topology_summary->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (eigrp_events !=  nullptr && eigrp_events->has_data())
	|| (neighbors !=  nullptr && neighbors->has_data())
	|| (eigrp_statistics !=  nullptr && eigrp_statistics->has_data());
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(asn.yfilter)
	|| (static_neighbors !=  nullptr && static_neighbors->has_operation())
	|| (topology_routes !=  nullptr && topology_routes->has_operation())
	|| (eigrp_accounting !=  nullptr && eigrp_accounting->has_operation())
	|| (eigrp_traffic !=  nullptr && eigrp_traffic->has_operation())
	|| (eigrp_topology_summary !=  nullptr && eigrp_topology_summary->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (eigrp_events !=  nullptr && eigrp_events->has_operation())
	|| (neighbors !=  nullptr && neighbors->has_operation())
	|| (eigrp_statistics !=  nullptr && eigrp_statistics->has_operation());
}

std::string Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as";
    ADD_KEY_TOKEN(asn, "asn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asn.is_set || is_set(asn.yfilter)) leaf_name_data.push_back(asn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "static-neighbors")
    {
        if(static_neighbors == nullptr)
        {
            static_neighbors = std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::StaticNeighbors>();
        }
        return static_neighbors;
    }

    if(child_yang_name == "topology-routes")
    {
        if(topology_routes == nullptr)
        {
            topology_routes = std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes>();
        }
        return topology_routes;
    }

    if(child_yang_name == "eigrp-accounting")
    {
        if(eigrp_accounting == nullptr)
        {
            eigrp_accounting = std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpAccounting>();
        }
        return eigrp_accounting;
    }

    if(child_yang_name == "eigrp-traffic")
    {
        if(eigrp_traffic == nullptr)
        {
            eigrp_traffic = std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpTraffic>();
        }
        return eigrp_traffic;
    }

    if(child_yang_name == "eigrp-topology-summary")
    {
        if(eigrp_topology_summary == nullptr)
        {
            eigrp_topology_summary = std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpTopologySummary>();
        }
        return eigrp_topology_summary;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::Interfaces>();
        }
        return interfaces;
    }

    if(child_yang_name == "eigrp-events")
    {
        if(eigrp_events == nullptr)
        {
            eigrp_events = std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpEvents>();
        }
        return eigrp_events;
    }

    if(child_yang_name == "neighbors")
    {
        if(neighbors == nullptr)
        {
            neighbors = std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::Neighbors>();
        }
        return neighbors;
    }

    if(child_yang_name == "eigrp-statistics")
    {
        if(eigrp_statistics == nullptr)
        {
            eigrp_statistics = std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpStatistics>();
        }
        return eigrp_statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(static_neighbors != nullptr)
    {
        _children["static-neighbors"] = static_neighbors;
    }

    if(topology_routes != nullptr)
    {
        _children["topology-routes"] = topology_routes;
    }

    if(eigrp_accounting != nullptr)
    {
        _children["eigrp-accounting"] = eigrp_accounting;
    }

    if(eigrp_traffic != nullptr)
    {
        _children["eigrp-traffic"] = eigrp_traffic;
    }

    if(eigrp_topology_summary != nullptr)
    {
        _children["eigrp-topology-summary"] = eigrp_topology_summary;
    }

    if(interfaces != nullptr)
    {
        _children["interfaces"] = interfaces;
    }

    if(eigrp_events != nullptr)
    {
        _children["eigrp-events"] = eigrp_events;
    }

    if(neighbors != nullptr)
    {
        _children["neighbors"] = neighbors;
    }

    if(eigrp_statistics != nullptr)
    {
        _children["eigrp-statistics"] = eigrp_statistics;
    }

    return _children;
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "asn")
    {
        asn = value;
        asn.value_namespace = name_space;
        asn.value_namespace_prefix = name_space_prefix;
    }
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "asn")
    {
        asn.yfilter = yfilter;
    }
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "static-neighbors" || name == "topology-routes" || name == "eigrp-accounting" || name == "eigrp-traffic" || name == "eigrp-topology-summary" || name == "interfaces" || name == "eigrp-events" || name == "neighbors" || name == "eigrp-statistics" || name == "asn")
        return true;
    return false;
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::StaticNeighbors::StaticNeighbors()
    :
    static_neighbor(this, {"neighbor_address"})
{

    yang_name = "static-neighbors"; yang_parent_name = "as"; is_top_level_class = false; has_list_ancestor = true; 
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::StaticNeighbors::~StaticNeighbors()
{
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::StaticNeighbors::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<static_neighbor.len(); index++)
    {
        if(static_neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::StaticNeighbors::has_operation() const
{
    for (std::size_t index=0; index<static_neighbor.len(); index++)
    {
        if(static_neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::StaticNeighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-neighbors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::StaticNeighbors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::StaticNeighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "static-neighbor")
    {
        auto ent_ = std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::StaticNeighbors::StaticNeighbor>();
        ent_->parent = this;
        static_neighbor.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::StaticNeighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : static_neighbor.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::StaticNeighbors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::StaticNeighbors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::StaticNeighbors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "static-neighbor")
        return true;
    return false;
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::StaticNeighbors::StaticNeighbor::StaticNeighbor()
    :
    neighbor_address{YType::str, "neighbor-address"},
    afi{YType::uint32, "afi"},
    as_number{YType::uint32, "as-number"},
    interface_list{YType::str, "interface-list"}
        ,
    source(std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::StaticNeighbors::StaticNeighbor::Source>())
{
    source->parent = this;

    yang_name = "static-neighbor"; yang_parent_name = "static-neighbors"; is_top_level_class = false; has_list_ancestor = true; 
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::StaticNeighbors::StaticNeighbor::~StaticNeighbor()
{
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::StaticNeighbors::StaticNeighbor::has_data() const
{
    if (is_presence_container) return true;
    return neighbor_address.is_set
	|| afi.is_set
	|| as_number.is_set
	|| interface_list.is_set
	|| (source !=  nullptr && source->has_data());
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::StaticNeighbors::StaticNeighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(as_number.yfilter)
	|| ydk::is_set(interface_list.yfilter)
	|| (source !=  nullptr && source->has_operation());
}

std::string Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::StaticNeighbors::StaticNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-neighbor";
    ADD_KEY_TOKEN(neighbor_address, "neighbor-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::StaticNeighbors::StaticNeighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());
    if (interface_list.is_set || is_set(interface_list.yfilter)) leaf_name_data.push_back(interface_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::StaticNeighbors::StaticNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::StaticNeighbors::StaticNeighbor::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::StaticNeighbors::StaticNeighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(source != nullptr)
    {
        _children["source"] = source;
    }

    return _children;
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::StaticNeighbors::StaticNeighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-list")
    {
        interface_list = value;
        interface_list.value_namespace = name_space;
        interface_list.value_namespace_prefix = name_space_prefix;
    }
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::StaticNeighbors::StaticNeighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
    if(value_path == "interface-list")
    {
        interface_list.yfilter = yfilter;
    }
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::StaticNeighbors::StaticNeighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source" || name == "neighbor-address" || name == "afi" || name == "as-number" || name == "interface-list")
        return true;
    return false;
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::StaticNeighbors::StaticNeighbor::Source::Source()
    :
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "source"; yang_parent_name = "static-neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::StaticNeighbors::StaticNeighbor::Source::~Source()
{
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::StaticNeighbors::StaticNeighbor::Source::has_data() const
{
    if (is_presence_container) return true;
    return ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::StaticNeighbors::StaticNeighbor::Source::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::StaticNeighbors::StaticNeighbor::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::StaticNeighbors::StaticNeighbor::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::StaticNeighbors::StaticNeighbor::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::StaticNeighbors::StaticNeighbor::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::StaticNeighbors::StaticNeighbor::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::StaticNeighbors::StaticNeighbor::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::StaticNeighbors::StaticNeighbor::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoutes()
    :
    topology_route(this, {})
{

    yang_name = "topology-routes"; yang_parent_name = "as"; is_top_level_class = false; has_list_ancestor = true; 
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::~TopologyRoutes()
{
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<topology_route.len(); index++)
    {
        if(topology_route[index]->has_data())
            return true;
    }
    return false;
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::has_operation() const
{
    for (std::size_t index=0; index<topology_route.len(); index++)
    {
        if(topology_route[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "topology-route")
    {
        auto ent_ = std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute>();
        ent_->parent = this;
        topology_route.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : topology_route.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "topology-route")
        return true;
    return false;
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::TopologyRoute()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint32, "prefix-length"},
    afi{YType::uint32, "afi"},
    as_number{YType::uint32, "as-number"},
    router_id{YType::str, "router-id"},
    active{YType::boolean, "active"},
    successors{YType::uint32, "successors"},
    successors_present{YType::boolean, "successors-present"},
    old_metric{YType::uint32, "old-metric"},
    old_metric64{YType::uint64, "old-metric64"},
    metric{YType::uint32, "metric"},
    metric64{YType::uint64, "metric64"},
    rib_metric{YType::uint32, "rib-metric"},
    tag{YType::uint32, "tag"},
    send_flag{YType::enumeration, "send-flag"},
    transmit_serial_number{YType::uint64, "transmit-serial-number"},
    transmit_refcount{YType::uint32, "transmit-refcount"},
    transmit_anchored{YType::boolean, "transmit-anchored"},
    reply_handles{YType::uint32, "reply-handles"},
    active_time_secs{YType::uint32, "active-time-secs"},
    active_time_nsecs{YType::uint32, "active-time-nsecs"},
    origin{YType::uint32, "origin"},
    retry_count{YType::uint32, "retry-count"},
    active_stats{YType::boolean, "active-stats"},
    min_time{YType::uint32, "min-time"},
    max_time{YType::uint32, "max-time"},
    average_time{YType::uint32, "average-time"},
    ack_count{YType::uint32, "ack-count"},
    replies{YType::uint32, "replies"},
    route_in_sia{YType::boolean, "route-in-sia"},
    sia_reply_handles{YType::uint32, "sia-reply-handles"}
        ,
    prefix_xr(std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::PrefixXr>())
    , paths(this, {})
    , active_peer(this, {})
    , sia_peer(this, {})
{
    prefix_xr->parent = this;

    yang_name = "topology-route"; yang_parent_name = "topology-routes"; is_top_level_class = false; has_list_ancestor = true; 
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::~TopologyRoute()
{
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<paths.len(); index++)
    {
        if(paths[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<active_peer.len(); index++)
    {
        if(active_peer[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<sia_peer.len(); index++)
    {
        if(sia_peer[index]->has_data())
            return true;
    }
    return prefix.is_set
	|| prefix_length.is_set
	|| afi.is_set
	|| as_number.is_set
	|| router_id.is_set
	|| active.is_set
	|| successors.is_set
	|| successors_present.is_set
	|| old_metric.is_set
	|| old_metric64.is_set
	|| metric.is_set
	|| metric64.is_set
	|| rib_metric.is_set
	|| tag.is_set
	|| send_flag.is_set
	|| transmit_serial_number.is_set
	|| transmit_refcount.is_set
	|| transmit_anchored.is_set
	|| reply_handles.is_set
	|| active_time_secs.is_set
	|| active_time_nsecs.is_set
	|| origin.is_set
	|| retry_count.is_set
	|| active_stats.is_set
	|| min_time.is_set
	|| max_time.is_set
	|| average_time.is_set
	|| ack_count.is_set
	|| replies.is_set
	|| route_in_sia.is_set
	|| sia_reply_handles.is_set
	|| (prefix_xr !=  nullptr && prefix_xr->has_data());
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::has_operation() const
{
    for (std::size_t index=0; index<paths.len(); index++)
    {
        if(paths[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<active_peer.len(); index++)
    {
        if(active_peer[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<sia_peer.len(); index++)
    {
        if(sia_peer[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(as_number.yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(active.yfilter)
	|| ydk::is_set(successors.yfilter)
	|| ydk::is_set(successors_present.yfilter)
	|| ydk::is_set(old_metric.yfilter)
	|| ydk::is_set(old_metric64.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric64.yfilter)
	|| ydk::is_set(rib_metric.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(send_flag.yfilter)
	|| ydk::is_set(transmit_serial_number.yfilter)
	|| ydk::is_set(transmit_refcount.yfilter)
	|| ydk::is_set(transmit_anchored.yfilter)
	|| ydk::is_set(reply_handles.yfilter)
	|| ydk::is_set(active_time_secs.yfilter)
	|| ydk::is_set(active_time_nsecs.yfilter)
	|| ydk::is_set(origin.yfilter)
	|| ydk::is_set(retry_count.yfilter)
	|| ydk::is_set(active_stats.yfilter)
	|| ydk::is_set(min_time.yfilter)
	|| ydk::is_set(max_time.yfilter)
	|| ydk::is_set(average_time.yfilter)
	|| ydk::is_set(ack_count.yfilter)
	|| ydk::is_set(replies.yfilter)
	|| ydk::is_set(route_in_sia.yfilter)
	|| ydk::is_set(sia_reply_handles.yfilter)
	|| (prefix_xr !=  nullptr && prefix_xr->has_operation());
}

std::string Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-route";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());
    if (successors.is_set || is_set(successors.yfilter)) leaf_name_data.push_back(successors.get_name_leafdata());
    if (successors_present.is_set || is_set(successors_present.yfilter)) leaf_name_data.push_back(successors_present.get_name_leafdata());
    if (old_metric.is_set || is_set(old_metric.yfilter)) leaf_name_data.push_back(old_metric.get_name_leafdata());
    if (old_metric64.is_set || is_set(old_metric64.yfilter)) leaf_name_data.push_back(old_metric64.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric64.is_set || is_set(metric64.yfilter)) leaf_name_data.push_back(metric64.get_name_leafdata());
    if (rib_metric.is_set || is_set(rib_metric.yfilter)) leaf_name_data.push_back(rib_metric.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (send_flag.is_set || is_set(send_flag.yfilter)) leaf_name_data.push_back(send_flag.get_name_leafdata());
    if (transmit_serial_number.is_set || is_set(transmit_serial_number.yfilter)) leaf_name_data.push_back(transmit_serial_number.get_name_leafdata());
    if (transmit_refcount.is_set || is_set(transmit_refcount.yfilter)) leaf_name_data.push_back(transmit_refcount.get_name_leafdata());
    if (transmit_anchored.is_set || is_set(transmit_anchored.yfilter)) leaf_name_data.push_back(transmit_anchored.get_name_leafdata());
    if (reply_handles.is_set || is_set(reply_handles.yfilter)) leaf_name_data.push_back(reply_handles.get_name_leafdata());
    if (active_time_secs.is_set || is_set(active_time_secs.yfilter)) leaf_name_data.push_back(active_time_secs.get_name_leafdata());
    if (active_time_nsecs.is_set || is_set(active_time_nsecs.yfilter)) leaf_name_data.push_back(active_time_nsecs.get_name_leafdata());
    if (origin.is_set || is_set(origin.yfilter)) leaf_name_data.push_back(origin.get_name_leafdata());
    if (retry_count.is_set || is_set(retry_count.yfilter)) leaf_name_data.push_back(retry_count.get_name_leafdata());
    if (active_stats.is_set || is_set(active_stats.yfilter)) leaf_name_data.push_back(active_stats.get_name_leafdata());
    if (min_time.is_set || is_set(min_time.yfilter)) leaf_name_data.push_back(min_time.get_name_leafdata());
    if (max_time.is_set || is_set(max_time.yfilter)) leaf_name_data.push_back(max_time.get_name_leafdata());
    if (average_time.is_set || is_set(average_time.yfilter)) leaf_name_data.push_back(average_time.get_name_leafdata());
    if (ack_count.is_set || is_set(ack_count.yfilter)) leaf_name_data.push_back(ack_count.get_name_leafdata());
    if (replies.is_set || is_set(replies.yfilter)) leaf_name_data.push_back(replies.get_name_leafdata());
    if (route_in_sia.is_set || is_set(route_in_sia.yfilter)) leaf_name_data.push_back(route_in_sia.get_name_leafdata());
    if (sia_reply_handles.is_set || is_set(sia_reply_handles.yfilter)) leaf_name_data.push_back(sia_reply_handles.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-xr")
    {
        if(prefix_xr == nullptr)
        {
            prefix_xr = std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::PrefixXr>();
        }
        return prefix_xr;
    }

    if(child_yang_name == "paths")
    {
        auto ent_ = std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::Paths>();
        ent_->parent = this;
        paths.append(ent_);
        return ent_;
    }

    if(child_yang_name == "active-peer")
    {
        auto ent_ = std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::ActivePeer>();
        ent_->parent = this;
        active_peer.append(ent_);
        return ent_;
    }

    if(child_yang_name == "sia-peer")
    {
        auto ent_ = std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::SiaPeer>();
        ent_->parent = this;
        sia_peer.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(prefix_xr != nullptr)
    {
        _children["prefix-xr"] = prefix_xr;
    }

    count_ = 0;
    for (auto ent_ : paths.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : active_peer.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : sia_peer.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "successors")
    {
        successors = value;
        successors.value_namespace = name_space;
        successors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "successors-present")
    {
        successors_present = value;
        successors_present.value_namespace = name_space;
        successors_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "old-metric")
    {
        old_metric = value;
        old_metric.value_namespace = name_space;
        old_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "old-metric64")
    {
        old_metric64 = value;
        old_metric64.value_namespace = name_space;
        old_metric64.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric64")
    {
        metric64 = value;
        metric64.value_namespace = name_space;
        metric64.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-metric")
    {
        rib_metric = value;
        rib_metric.value_namespace = name_space;
        rib_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-flag")
    {
        send_flag = value;
        send_flag.value_namespace = name_space;
        send_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-serial-number")
    {
        transmit_serial_number = value;
        transmit_serial_number.value_namespace = name_space;
        transmit_serial_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-refcount")
    {
        transmit_refcount = value;
        transmit_refcount.value_namespace = name_space;
        transmit_refcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-anchored")
    {
        transmit_anchored = value;
        transmit_anchored.value_namespace = name_space;
        transmit_anchored.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reply-handles")
    {
        reply_handles = value;
        reply_handles.value_namespace = name_space;
        reply_handles.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-time-secs")
    {
        active_time_secs = value;
        active_time_secs.value_namespace = name_space;
        active_time_secs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-time-nsecs")
    {
        active_time_nsecs = value;
        active_time_nsecs.value_namespace = name_space;
        active_time_nsecs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origin")
    {
        origin = value;
        origin.value_namespace = name_space;
        origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retry-count")
    {
        retry_count = value;
        retry_count.value_namespace = name_space;
        retry_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-stats")
    {
        active_stats = value;
        active_stats.value_namespace = name_space;
        active_stats.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-time")
    {
        min_time = value;
        min_time.value_namespace = name_space;
        min_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-time")
    {
        max_time = value;
        max_time.value_namespace = name_space;
        max_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average-time")
    {
        average_time = value;
        average_time.value_namespace = name_space;
        average_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ack-count")
    {
        ack_count = value;
        ack_count.value_namespace = name_space;
        ack_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "replies")
    {
        replies = value;
        replies.value_namespace = name_space;
        replies.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-in-sia")
    {
        route_in_sia = value;
        route_in_sia.value_namespace = name_space;
        route_in_sia.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sia-reply-handles")
    {
        sia_reply_handles = value;
        sia_reply_handles.value_namespace = name_space;
        sia_reply_handles.value_namespace_prefix = name_space_prefix;
    }
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
    if(value_path == "successors")
    {
        successors.yfilter = yfilter;
    }
    if(value_path == "successors-present")
    {
        successors_present.yfilter = yfilter;
    }
    if(value_path == "old-metric")
    {
        old_metric.yfilter = yfilter;
    }
    if(value_path == "old-metric64")
    {
        old_metric64.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric64")
    {
        metric64.yfilter = yfilter;
    }
    if(value_path == "rib-metric")
    {
        rib_metric.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "send-flag")
    {
        send_flag.yfilter = yfilter;
    }
    if(value_path == "transmit-serial-number")
    {
        transmit_serial_number.yfilter = yfilter;
    }
    if(value_path == "transmit-refcount")
    {
        transmit_refcount.yfilter = yfilter;
    }
    if(value_path == "transmit-anchored")
    {
        transmit_anchored.yfilter = yfilter;
    }
    if(value_path == "reply-handles")
    {
        reply_handles.yfilter = yfilter;
    }
    if(value_path == "active-time-secs")
    {
        active_time_secs.yfilter = yfilter;
    }
    if(value_path == "active-time-nsecs")
    {
        active_time_nsecs.yfilter = yfilter;
    }
    if(value_path == "origin")
    {
        origin.yfilter = yfilter;
    }
    if(value_path == "retry-count")
    {
        retry_count.yfilter = yfilter;
    }
    if(value_path == "active-stats")
    {
        active_stats.yfilter = yfilter;
    }
    if(value_path == "min-time")
    {
        min_time.yfilter = yfilter;
    }
    if(value_path == "max-time")
    {
        max_time.yfilter = yfilter;
    }
    if(value_path == "average-time")
    {
        average_time.yfilter = yfilter;
    }
    if(value_path == "ack-count")
    {
        ack_count.yfilter = yfilter;
    }
    if(value_path == "replies")
    {
        replies.yfilter = yfilter;
    }
    if(value_path == "route-in-sia")
    {
        route_in_sia.yfilter = yfilter;
    }
    if(value_path == "sia-reply-handles")
    {
        sia_reply_handles.yfilter = yfilter;
    }
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-xr" || name == "paths" || name == "active-peer" || name == "sia-peer" || name == "prefix" || name == "prefix-length" || name == "afi" || name == "as-number" || name == "router-id" || name == "active" || name == "successors" || name == "successors-present" || name == "old-metric" || name == "old-metric64" || name == "metric" || name == "metric64" || name == "rib-metric" || name == "tag" || name == "send-flag" || name == "transmit-serial-number" || name == "transmit-refcount" || name == "transmit-anchored" || name == "reply-handles" || name == "active-time-secs" || name == "active-time-nsecs" || name == "origin" || name == "retry-count" || name == "active-stats" || name == "min-time" || name == "max-time" || name == "average-time" || name == "ack-count" || name == "replies" || name == "route-in-sia" || name == "sia-reply-handles")
        return true;
    return false;
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::PrefixXr::PrefixXr()
    :
    ipv4_prefix{YType::str, "ipv4-prefix"},
    ipv6_prefix{YType::str, "ipv6-prefix"},
    prefix_length{YType::uint32, "prefix-length"}
{

    yang_name = "prefix-xr"; yang_parent_name = "topology-route"; is_top_level_class = false; has_list_ancestor = true; 
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::PrefixXr::~PrefixXr()
{
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::PrefixXr::has_data() const
{
    if (is_presence_container) return true;
    return ipv4_prefix.is_set
	|| ipv6_prefix.is_set
	|| prefix_length.is_set;
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::PrefixXr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_prefix.yfilter)
	|| ydk::is_set(ipv6_prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter);
}

std::string Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::PrefixXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::PrefixXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_prefix.is_set || is_set(ipv4_prefix.yfilter)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());
    if (ipv6_prefix.is_set || is_set(ipv6_prefix.yfilter)) leaf_name_data.push_back(ipv6_prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::PrefixXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::PrefixXr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::PrefixXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix = value;
        ipv4_prefix.value_namespace = name_space;
        ipv4_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-prefix")
    {
        ipv6_prefix = value;
        ipv6_prefix.value_namespace = name_space;
        ipv6_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::PrefixXr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix.yfilter = yfilter;
    }
    if(value_path == "ipv6-prefix")
    {
        ipv6_prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::PrefixXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-prefix" || name == "ipv6-prefix" || name == "prefix-length")
        return true;
    return false;
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::Paths::Paths()
    :
    afi{YType::uint32, "afi"},
    next_hop_present{YType::boolean, "next-hop-present"},
    interface_handle{YType::str, "interface-handle"},
    interface_name{YType::str, "interface-name"},
    origin{YType::enumeration, "origin"},
    send_flag{YType::enumeration, "send-flag"},
    reply_outstanding{YType::boolean, "reply-outstanding"},
    metric{YType::uint32, "metric"},
    metric64{YType::uint64, "metric64"},
    successor_metric{YType::uint32, "successor-metric"},
    successor_metric64{YType::uint64, "successor-metric64"},
    reply_status{YType::boolean, "reply-status"},
    sia_status{YType::boolean, "sia-status"},
    transmit_serial_number{YType::uint64, "transmit-serial-number"},
    anchored{YType::boolean, "anchored"},
    external_path{YType::boolean, "external-path"},
    bandwidth{YType::uint32, "bandwidth"},
    bandwidth64{YType::uint64, "bandwidth64"},
    delay{YType::uint32, "delay"},
    delay64{YType::uint64, "delay64"},
    delay_unit{YType::enumeration, "delay-unit"},
    mtu{YType::uint32, "mtu"},
    hop_count{YType::uint32, "hop-count"},
    reliability{YType::uint8, "reliability"},
    load{YType::uint8, "load"},
    internal_router_id{YType::str, "internal-router-id"},
    internal_tag{YType::uint8, "internal-tag"},
    extended_communities_present{YType::boolean, "extended-communities-present"},
    extended_communities_length{YType::uint32, "extended-communities-length"},
    extended_communities{YType::str, "extended-communities"},
    external_information_present{YType::boolean, "external-information-present"},
    external_router_id{YType::uint32, "external-router-id"},
    external_this_system{YType::boolean, "external-this-system"},
    external_as{YType::uint32, "external-as"},
    external_protocol{YType::str, "external-protocol"},
    external_metric{YType::uint32, "external-metric"},
    external_tag{YType::uint32, "external-tag"},
    conditional_default_path{YType::boolean, "conditional-default-path"},
    rib_state{YType::enumeration, "rib-state"}
        ,
    next_hop_address(std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::Paths::NextHopAddress>())
    , infosource(std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::Paths::Infosource>())
{
    next_hop_address->parent = this;
    infosource->parent = this;

    yang_name = "paths"; yang_parent_name = "topology-route"; is_top_level_class = false; has_list_ancestor = true; 
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::Paths::~Paths()
{
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::Paths::has_data() const
{
    if (is_presence_container) return true;
    return afi.is_set
	|| next_hop_present.is_set
	|| interface_handle.is_set
	|| interface_name.is_set
	|| origin.is_set
	|| send_flag.is_set
	|| reply_outstanding.is_set
	|| metric.is_set
	|| metric64.is_set
	|| successor_metric.is_set
	|| successor_metric64.is_set
	|| reply_status.is_set
	|| sia_status.is_set
	|| transmit_serial_number.is_set
	|| anchored.is_set
	|| external_path.is_set
	|| bandwidth.is_set
	|| bandwidth64.is_set
	|| delay.is_set
	|| delay64.is_set
	|| delay_unit.is_set
	|| mtu.is_set
	|| hop_count.is_set
	|| reliability.is_set
	|| load.is_set
	|| internal_router_id.is_set
	|| internal_tag.is_set
	|| extended_communities_present.is_set
	|| extended_communities_length.is_set
	|| extended_communities.is_set
	|| external_information_present.is_set
	|| external_router_id.is_set
	|| external_this_system.is_set
	|| external_as.is_set
	|| external_protocol.is_set
	|| external_metric.is_set
	|| external_tag.is_set
	|| conditional_default_path.is_set
	|| rib_state.is_set
	|| (next_hop_address !=  nullptr && next_hop_address->has_data())
	|| (infosource !=  nullptr && infosource->has_data());
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::Paths::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(next_hop_present.yfilter)
	|| ydk::is_set(interface_handle.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(origin.yfilter)
	|| ydk::is_set(send_flag.yfilter)
	|| ydk::is_set(reply_outstanding.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric64.yfilter)
	|| ydk::is_set(successor_metric.yfilter)
	|| ydk::is_set(successor_metric64.yfilter)
	|| ydk::is_set(reply_status.yfilter)
	|| ydk::is_set(sia_status.yfilter)
	|| ydk::is_set(transmit_serial_number.yfilter)
	|| ydk::is_set(anchored.yfilter)
	|| ydk::is_set(external_path.yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(bandwidth64.yfilter)
	|| ydk::is_set(delay.yfilter)
	|| ydk::is_set(delay64.yfilter)
	|| ydk::is_set(delay_unit.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(hop_count.yfilter)
	|| ydk::is_set(reliability.yfilter)
	|| ydk::is_set(load.yfilter)
	|| ydk::is_set(internal_router_id.yfilter)
	|| ydk::is_set(internal_tag.yfilter)
	|| ydk::is_set(extended_communities_present.yfilter)
	|| ydk::is_set(extended_communities_length.yfilter)
	|| ydk::is_set(extended_communities.yfilter)
	|| ydk::is_set(external_information_present.yfilter)
	|| ydk::is_set(external_router_id.yfilter)
	|| ydk::is_set(external_this_system.yfilter)
	|| ydk::is_set(external_as.yfilter)
	|| ydk::is_set(external_protocol.yfilter)
	|| ydk::is_set(external_metric.yfilter)
	|| ydk::is_set(external_tag.yfilter)
	|| ydk::is_set(conditional_default_path.yfilter)
	|| ydk::is_set(rib_state.yfilter)
	|| (next_hop_address !=  nullptr && next_hop_address->has_operation())
	|| (infosource !=  nullptr && infosource->has_operation());
}

std::string Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::Paths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "paths";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::Paths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (next_hop_present.is_set || is_set(next_hop_present.yfilter)) leaf_name_data.push_back(next_hop_present.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (origin.is_set || is_set(origin.yfilter)) leaf_name_data.push_back(origin.get_name_leafdata());
    if (send_flag.is_set || is_set(send_flag.yfilter)) leaf_name_data.push_back(send_flag.get_name_leafdata());
    if (reply_outstanding.is_set || is_set(reply_outstanding.yfilter)) leaf_name_data.push_back(reply_outstanding.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric64.is_set || is_set(metric64.yfilter)) leaf_name_data.push_back(metric64.get_name_leafdata());
    if (successor_metric.is_set || is_set(successor_metric.yfilter)) leaf_name_data.push_back(successor_metric.get_name_leafdata());
    if (successor_metric64.is_set || is_set(successor_metric64.yfilter)) leaf_name_data.push_back(successor_metric64.get_name_leafdata());
    if (reply_status.is_set || is_set(reply_status.yfilter)) leaf_name_data.push_back(reply_status.get_name_leafdata());
    if (sia_status.is_set || is_set(sia_status.yfilter)) leaf_name_data.push_back(sia_status.get_name_leafdata());
    if (transmit_serial_number.is_set || is_set(transmit_serial_number.yfilter)) leaf_name_data.push_back(transmit_serial_number.get_name_leafdata());
    if (anchored.is_set || is_set(anchored.yfilter)) leaf_name_data.push_back(anchored.get_name_leafdata());
    if (external_path.is_set || is_set(external_path.yfilter)) leaf_name_data.push_back(external_path.get_name_leafdata());
    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (bandwidth64.is_set || is_set(bandwidth64.yfilter)) leaf_name_data.push_back(bandwidth64.get_name_leafdata());
    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());
    if (delay64.is_set || is_set(delay64.yfilter)) leaf_name_data.push_back(delay64.get_name_leafdata());
    if (delay_unit.is_set || is_set(delay_unit.yfilter)) leaf_name_data.push_back(delay_unit.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (hop_count.is_set || is_set(hop_count.yfilter)) leaf_name_data.push_back(hop_count.get_name_leafdata());
    if (reliability.is_set || is_set(reliability.yfilter)) leaf_name_data.push_back(reliability.get_name_leafdata());
    if (load.is_set || is_set(load.yfilter)) leaf_name_data.push_back(load.get_name_leafdata());
    if (internal_router_id.is_set || is_set(internal_router_id.yfilter)) leaf_name_data.push_back(internal_router_id.get_name_leafdata());
    if (internal_tag.is_set || is_set(internal_tag.yfilter)) leaf_name_data.push_back(internal_tag.get_name_leafdata());
    if (extended_communities_present.is_set || is_set(extended_communities_present.yfilter)) leaf_name_data.push_back(extended_communities_present.get_name_leafdata());
    if (extended_communities_length.is_set || is_set(extended_communities_length.yfilter)) leaf_name_data.push_back(extended_communities_length.get_name_leafdata());
    if (extended_communities.is_set || is_set(extended_communities.yfilter)) leaf_name_data.push_back(extended_communities.get_name_leafdata());
    if (external_information_present.is_set || is_set(external_information_present.yfilter)) leaf_name_data.push_back(external_information_present.get_name_leafdata());
    if (external_router_id.is_set || is_set(external_router_id.yfilter)) leaf_name_data.push_back(external_router_id.get_name_leafdata());
    if (external_this_system.is_set || is_set(external_this_system.yfilter)) leaf_name_data.push_back(external_this_system.get_name_leafdata());
    if (external_as.is_set || is_set(external_as.yfilter)) leaf_name_data.push_back(external_as.get_name_leafdata());
    if (external_protocol.is_set || is_set(external_protocol.yfilter)) leaf_name_data.push_back(external_protocol.get_name_leafdata());
    if (external_metric.is_set || is_set(external_metric.yfilter)) leaf_name_data.push_back(external_metric.get_name_leafdata());
    if (external_tag.is_set || is_set(external_tag.yfilter)) leaf_name_data.push_back(external_tag.get_name_leafdata());
    if (conditional_default_path.is_set || is_set(conditional_default_path.yfilter)) leaf_name_data.push_back(conditional_default_path.get_name_leafdata());
    if (rib_state.is_set || is_set(rib_state.yfilter)) leaf_name_data.push_back(rib_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::Paths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop-address")
    {
        if(next_hop_address == nullptr)
        {
            next_hop_address = std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::Paths::NextHopAddress>();
        }
        return next_hop_address;
    }

    if(child_yang_name == "infosource")
    {
        if(infosource == nullptr)
        {
            infosource = std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::Paths::Infosource>();
        }
        return infosource;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::Paths::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(next_hop_address != nullptr)
    {
        _children["next-hop-address"] = next_hop_address;
    }

    if(infosource != nullptr)
    {
        _children["infosource"] = infosource;
    }

    return _children;
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::Paths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-present")
    {
        next_hop_present = value;
        next_hop_present.value_namespace = name_space;
        next_hop_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origin")
    {
        origin = value;
        origin.value_namespace = name_space;
        origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-flag")
    {
        send_flag = value;
        send_flag.value_namespace = name_space;
        send_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reply-outstanding")
    {
        reply_outstanding = value;
        reply_outstanding.value_namespace = name_space;
        reply_outstanding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric64")
    {
        metric64 = value;
        metric64.value_namespace = name_space;
        metric64.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "successor-metric")
    {
        successor_metric = value;
        successor_metric.value_namespace = name_space;
        successor_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "successor-metric64")
    {
        successor_metric64 = value;
        successor_metric64.value_namespace = name_space;
        successor_metric64.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reply-status")
    {
        reply_status = value;
        reply_status.value_namespace = name_space;
        reply_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sia-status")
    {
        sia_status = value;
        sia_status.value_namespace = name_space;
        sia_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-serial-number")
    {
        transmit_serial_number = value;
        transmit_serial_number.value_namespace = name_space;
        transmit_serial_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "anchored")
    {
        anchored = value;
        anchored.value_namespace = name_space;
        anchored.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-path")
    {
        external_path = value;
        external_path.value_namespace = name_space;
        external_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth64")
    {
        bandwidth64 = value;
        bandwidth64.value_namespace = name_space;
        bandwidth64.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay64")
    {
        delay64 = value;
        delay64.value_namespace = name_space;
        delay64.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay-unit")
    {
        delay_unit = value;
        delay_unit.value_namespace = name_space;
        delay_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hop-count")
    {
        hop_count = value;
        hop_count.value_namespace = name_space;
        hop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reliability")
    {
        reliability = value;
        reliability.value_namespace = name_space;
        reliability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load")
    {
        load = value;
        load.value_namespace = name_space;
        load.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-router-id")
    {
        internal_router_id = value;
        internal_router_id.value_namespace = name_space;
        internal_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-tag")
    {
        internal_tag = value;
        internal_tag.value_namespace = name_space;
        internal_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-communities-present")
    {
        extended_communities_present = value;
        extended_communities_present.value_namespace = name_space;
        extended_communities_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-communities-length")
    {
        extended_communities_length = value;
        extended_communities_length.value_namespace = name_space;
        extended_communities_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-communities")
    {
        extended_communities = value;
        extended_communities.value_namespace = name_space;
        extended_communities.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-information-present")
    {
        external_information_present = value;
        external_information_present.value_namespace = name_space;
        external_information_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-router-id")
    {
        external_router_id = value;
        external_router_id.value_namespace = name_space;
        external_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-this-system")
    {
        external_this_system = value;
        external_this_system.value_namespace = name_space;
        external_this_system.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-as")
    {
        external_as = value;
        external_as.value_namespace = name_space;
        external_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-protocol")
    {
        external_protocol = value;
        external_protocol.value_namespace = name_space;
        external_protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-metric")
    {
        external_metric = value;
        external_metric.value_namespace = name_space;
        external_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-tag")
    {
        external_tag = value;
        external_tag.value_namespace = name_space;
        external_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conditional-default-path")
    {
        conditional_default_path = value;
        conditional_default_path.value_namespace = name_space;
        conditional_default_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-state")
    {
        rib_state = value;
        rib_state.value_namespace = name_space;
        rib_state.value_namespace_prefix = name_space_prefix;
    }
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::Paths::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "next-hop-present")
    {
        next_hop_present.yfilter = yfilter;
    }
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "origin")
    {
        origin.yfilter = yfilter;
    }
    if(value_path == "send-flag")
    {
        send_flag.yfilter = yfilter;
    }
    if(value_path == "reply-outstanding")
    {
        reply_outstanding.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric64")
    {
        metric64.yfilter = yfilter;
    }
    if(value_path == "successor-metric")
    {
        successor_metric.yfilter = yfilter;
    }
    if(value_path == "successor-metric64")
    {
        successor_metric64.yfilter = yfilter;
    }
    if(value_path == "reply-status")
    {
        reply_status.yfilter = yfilter;
    }
    if(value_path == "sia-status")
    {
        sia_status.yfilter = yfilter;
    }
    if(value_path == "transmit-serial-number")
    {
        transmit_serial_number.yfilter = yfilter;
    }
    if(value_path == "anchored")
    {
        anchored.yfilter = yfilter;
    }
    if(value_path == "external-path")
    {
        external_path.yfilter = yfilter;
    }
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
    if(value_path == "bandwidth64")
    {
        bandwidth64.yfilter = yfilter;
    }
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
    if(value_path == "delay64")
    {
        delay64.yfilter = yfilter;
    }
    if(value_path == "delay-unit")
    {
        delay_unit.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "hop-count")
    {
        hop_count.yfilter = yfilter;
    }
    if(value_path == "reliability")
    {
        reliability.yfilter = yfilter;
    }
    if(value_path == "load")
    {
        load.yfilter = yfilter;
    }
    if(value_path == "internal-router-id")
    {
        internal_router_id.yfilter = yfilter;
    }
    if(value_path == "internal-tag")
    {
        internal_tag.yfilter = yfilter;
    }
    if(value_path == "extended-communities-present")
    {
        extended_communities_present.yfilter = yfilter;
    }
    if(value_path == "extended-communities-length")
    {
        extended_communities_length.yfilter = yfilter;
    }
    if(value_path == "extended-communities")
    {
        extended_communities.yfilter = yfilter;
    }
    if(value_path == "external-information-present")
    {
        external_information_present.yfilter = yfilter;
    }
    if(value_path == "external-router-id")
    {
        external_router_id.yfilter = yfilter;
    }
    if(value_path == "external-this-system")
    {
        external_this_system.yfilter = yfilter;
    }
    if(value_path == "external-as")
    {
        external_as.yfilter = yfilter;
    }
    if(value_path == "external-protocol")
    {
        external_protocol.yfilter = yfilter;
    }
    if(value_path == "external-metric")
    {
        external_metric.yfilter = yfilter;
    }
    if(value_path == "external-tag")
    {
        external_tag.yfilter = yfilter;
    }
    if(value_path == "conditional-default-path")
    {
        conditional_default_path.yfilter = yfilter;
    }
    if(value_path == "rib-state")
    {
        rib_state.yfilter = yfilter;
    }
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::Paths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop-address" || name == "infosource" || name == "afi" || name == "next-hop-present" || name == "interface-handle" || name == "interface-name" || name == "origin" || name == "send-flag" || name == "reply-outstanding" || name == "metric" || name == "metric64" || name == "successor-metric" || name == "successor-metric64" || name == "reply-status" || name == "sia-status" || name == "transmit-serial-number" || name == "anchored" || name == "external-path" || name == "bandwidth" || name == "bandwidth64" || name == "delay" || name == "delay64" || name == "delay-unit" || name == "mtu" || name == "hop-count" || name == "reliability" || name == "load" || name == "internal-router-id" || name == "internal-tag" || name == "extended-communities-present" || name == "extended-communities-length" || name == "extended-communities" || name == "external-information-present" || name == "external-router-id" || name == "external-this-system" || name == "external-as" || name == "external-protocol" || name == "external-metric" || name == "external-tag" || name == "conditional-default-path" || name == "rib-state")
        return true;
    return false;
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::Paths::NextHopAddress::NextHopAddress()
    :
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "next-hop-address"; yang_parent_name = "paths"; is_top_level_class = false; has_list_ancestor = true; 
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::Paths::NextHopAddress::~NextHopAddress()
{
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::Paths::NextHopAddress::has_data() const
{
    if (is_presence_container) return true;
    return ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::Paths::NextHopAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::Paths::NextHopAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::Paths::NextHopAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::Paths::NextHopAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::Paths::NextHopAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::Paths::NextHopAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::Paths::NextHopAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::Paths::NextHopAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::Paths::Infosource::Infosource()
    :
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "infosource"; yang_parent_name = "paths"; is_top_level_class = false; has_list_ancestor = true; 
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::Paths::Infosource::~Infosource()
{
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::Paths::Infosource::has_data() const
{
    if (is_presence_container) return true;
    return ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::Paths::Infosource::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::Paths::Infosource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "infosource";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::Paths::Infosource::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::Paths::Infosource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::Paths::Infosource::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::Paths::Infosource::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::Paths::Infosource::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::Paths::Infosource::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::ActivePeer::ActivePeer()
    :
    peer_available{YType::boolean, "peer-available"},
    interface_list{YType::str, "interface-list"},
    handle_number{YType::uint32, "handle-number"}
        ,
    source(std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::ActivePeer::Source>())
{
    source->parent = this;

    yang_name = "active-peer"; yang_parent_name = "topology-route"; is_top_level_class = false; has_list_ancestor = true; 
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::ActivePeer::~ActivePeer()
{
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::ActivePeer::has_data() const
{
    if (is_presence_container) return true;
    return peer_available.is_set
	|| interface_list.is_set
	|| handle_number.is_set
	|| (source !=  nullptr && source->has_data());
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::ActivePeer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_available.yfilter)
	|| ydk::is_set(interface_list.yfilter)
	|| ydk::is_set(handle_number.yfilter)
	|| (source !=  nullptr && source->has_operation());
}

std::string Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::ActivePeer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active-peer";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::ActivePeer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_available.is_set || is_set(peer_available.yfilter)) leaf_name_data.push_back(peer_available.get_name_leafdata());
    if (interface_list.is_set || is_set(interface_list.yfilter)) leaf_name_data.push_back(interface_list.get_name_leafdata());
    if (handle_number.is_set || is_set(handle_number.yfilter)) leaf_name_data.push_back(handle_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::ActivePeer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::ActivePeer::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::ActivePeer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(source != nullptr)
    {
        _children["source"] = source;
    }

    return _children;
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::ActivePeer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-available")
    {
        peer_available = value;
        peer_available.value_namespace = name_space;
        peer_available.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-list")
    {
        interface_list = value;
        interface_list.value_namespace = name_space;
        interface_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "handle-number")
    {
        handle_number = value;
        handle_number.value_namespace = name_space;
        handle_number.value_namespace_prefix = name_space_prefix;
    }
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::ActivePeer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-available")
    {
        peer_available.yfilter = yfilter;
    }
    if(value_path == "interface-list")
    {
        interface_list.yfilter = yfilter;
    }
    if(value_path == "handle-number")
    {
        handle_number.yfilter = yfilter;
    }
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::ActivePeer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source" || name == "peer-available" || name == "interface-list" || name == "handle-number")
        return true;
    return false;
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::ActivePeer::Source::Source()
    :
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "source"; yang_parent_name = "active-peer"; is_top_level_class = false; has_list_ancestor = true; 
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::ActivePeer::Source::~Source()
{
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::ActivePeer::Source::has_data() const
{
    if (is_presence_container) return true;
    return ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::ActivePeer::Source::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::ActivePeer::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::ActivePeer::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::ActivePeer::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::ActivePeer::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::ActivePeer::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::ActivePeer::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::ActivePeer::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::SiaPeer::SiaPeer()
    :
    peer_available{YType::boolean, "peer-available"},
    interface_list{YType::str, "interface-list"},
    handle_number{YType::uint32, "handle-number"}
        ,
    source(std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::SiaPeer::Source>())
{
    source->parent = this;

    yang_name = "sia-peer"; yang_parent_name = "topology-route"; is_top_level_class = false; has_list_ancestor = true; 
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::SiaPeer::~SiaPeer()
{
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::SiaPeer::has_data() const
{
    if (is_presence_container) return true;
    return peer_available.is_set
	|| interface_list.is_set
	|| handle_number.is_set
	|| (source !=  nullptr && source->has_data());
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::SiaPeer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_available.yfilter)
	|| ydk::is_set(interface_list.yfilter)
	|| ydk::is_set(handle_number.yfilter)
	|| (source !=  nullptr && source->has_operation());
}

std::string Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::SiaPeer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sia-peer";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::SiaPeer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_available.is_set || is_set(peer_available.yfilter)) leaf_name_data.push_back(peer_available.get_name_leafdata());
    if (interface_list.is_set || is_set(interface_list.yfilter)) leaf_name_data.push_back(interface_list.get_name_leafdata());
    if (handle_number.is_set || is_set(handle_number.yfilter)) leaf_name_data.push_back(handle_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::SiaPeer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::SiaPeer::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::SiaPeer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(source != nullptr)
    {
        _children["source"] = source;
    }

    return _children;
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::SiaPeer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-available")
    {
        peer_available = value;
        peer_available.value_namespace = name_space;
        peer_available.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-list")
    {
        interface_list = value;
        interface_list.value_namespace = name_space;
        interface_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "handle-number")
    {
        handle_number = value;
        handle_number.value_namespace = name_space;
        handle_number.value_namespace_prefix = name_space_prefix;
    }
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::SiaPeer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-available")
    {
        peer_available.yfilter = yfilter;
    }
    if(value_path == "interface-list")
    {
        interface_list.yfilter = yfilter;
    }
    if(value_path == "handle-number")
    {
        handle_number.yfilter = yfilter;
    }
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::SiaPeer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source" || name == "peer-available" || name == "interface-list" || name == "handle-number")
        return true;
    return false;
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::SiaPeer::Source::Source()
    :
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "source"; yang_parent_name = "sia-peer"; is_top_level_class = false; has_list_ancestor = true; 
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::SiaPeer::Source::~Source()
{
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::SiaPeer::Source::has_data() const
{
    if (is_presence_container) return true;
    return ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::SiaPeer::Source::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::SiaPeer::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::SiaPeer::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::SiaPeer::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::SiaPeer::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::SiaPeer::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::SiaPeer::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::TopologyRoutes::TopologyRoute::SiaPeer::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpAccounting::EigrpAccounting()
    :
    afi{YType::uint32, "afi"},
    as_number{YType::uint32, "as-number"},
    router_id{YType::str, "router-id"},
    aggregate_count{YType::uint32, "aggregate-count"},
    state{YType::int8, "state"},
    redist_prefix_count{YType::uint32, "redist-prefix-count"},
    restart_count{YType::uint32, "restart-count"},
    time_left{YType::uint32, "time-left"},
    redist_prefix_present{YType::boolean, "redist-prefix-present"}
        ,
    peer_statistics(this, {})
{

    yang_name = "eigrp-accounting"; yang_parent_name = "as"; is_top_level_class = false; has_list_ancestor = true; 
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpAccounting::~EigrpAccounting()
{
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpAccounting::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<peer_statistics.len(); index++)
    {
        if(peer_statistics[index]->has_data())
            return true;
    }
    return afi.is_set
	|| as_number.is_set
	|| router_id.is_set
	|| aggregate_count.is_set
	|| state.is_set
	|| redist_prefix_count.is_set
	|| restart_count.is_set
	|| time_left.is_set
	|| redist_prefix_present.is_set;
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpAccounting::has_operation() const
{
    for (std::size_t index=0; index<peer_statistics.len(); index++)
    {
        if(peer_statistics[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(as_number.yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(aggregate_count.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(redist_prefix_count.yfilter)
	|| ydk::is_set(restart_count.yfilter)
	|| ydk::is_set(time_left.yfilter)
	|| ydk::is_set(redist_prefix_present.yfilter);
}

std::string Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpAccounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp-accounting";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpAccounting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (aggregate_count.is_set || is_set(aggregate_count.yfilter)) leaf_name_data.push_back(aggregate_count.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (redist_prefix_count.is_set || is_set(redist_prefix_count.yfilter)) leaf_name_data.push_back(redist_prefix_count.get_name_leafdata());
    if (restart_count.is_set || is_set(restart_count.yfilter)) leaf_name_data.push_back(restart_count.get_name_leafdata());
    if (time_left.is_set || is_set(time_left.yfilter)) leaf_name_data.push_back(time_left.get_name_leafdata());
    if (redist_prefix_present.is_set || is_set(redist_prefix_present.yfilter)) leaf_name_data.push_back(redist_prefix_present.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpAccounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-statistics")
    {
        auto ent_ = std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpAccounting::PeerStatistics>();
        ent_->parent = this;
        peer_statistics.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpAccounting::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : peer_statistics.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpAccounting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggregate-count")
    {
        aggregate_count = value;
        aggregate_count.value_namespace = name_space;
        aggregate_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redist-prefix-count")
    {
        redist_prefix_count = value;
        redist_prefix_count.value_namespace = name_space;
        redist_prefix_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-count")
    {
        restart_count = value;
        restart_count.value_namespace = name_space;
        restart_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-left")
    {
        time_left = value;
        time_left.value_namespace = name_space;
        time_left.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redist-prefix-present")
    {
        redist_prefix_present = value;
        redist_prefix_present.value_namespace = name_space;
        redist_prefix_present.value_namespace_prefix = name_space_prefix;
    }
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpAccounting::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "aggregate-count")
    {
        aggregate_count.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "redist-prefix-count")
    {
        redist_prefix_count.yfilter = yfilter;
    }
    if(value_path == "restart-count")
    {
        restart_count.yfilter = yfilter;
    }
    if(value_path == "time-left")
    {
        time_left.yfilter = yfilter;
    }
    if(value_path == "redist-prefix-present")
    {
        redist_prefix_present.yfilter = yfilter;
    }
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpAccounting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-statistics" || name == "afi" || name == "as-number" || name == "router-id" || name == "aggregate-count" || name == "state" || name == "redist-prefix-count" || name == "restart-count" || name == "time-left" || name == "redist-prefix-present")
        return true;
    return false;
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpAccounting::PeerStatistics::PeerStatistics()
    :
    afi{YType::uint32, "afi"},
    state{YType::int8, "state"},
    interface_list{YType::str, "interface-list"},
    peer_prefix_count{YType::uint32, "peer-prefix-count"},
    restart_count{YType::uint32, "restart-count"},
    time_left{YType::uint32, "time-left"}
        ,
    source(std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpAccounting::PeerStatistics::Source>())
{
    source->parent = this;

    yang_name = "peer-statistics"; yang_parent_name = "eigrp-accounting"; is_top_level_class = false; has_list_ancestor = true; 
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpAccounting::PeerStatistics::~PeerStatistics()
{
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpAccounting::PeerStatistics::has_data() const
{
    if (is_presence_container) return true;
    return afi.is_set
	|| state.is_set
	|| interface_list.is_set
	|| peer_prefix_count.is_set
	|| restart_count.is_set
	|| time_left.is_set
	|| (source !=  nullptr && source->has_data());
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpAccounting::PeerStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(interface_list.yfilter)
	|| ydk::is_set(peer_prefix_count.yfilter)
	|| ydk::is_set(restart_count.yfilter)
	|| ydk::is_set(time_left.yfilter)
	|| (source !=  nullptr && source->has_operation());
}

std::string Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpAccounting::PeerStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-statistics";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpAccounting::PeerStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (interface_list.is_set || is_set(interface_list.yfilter)) leaf_name_data.push_back(interface_list.get_name_leafdata());
    if (peer_prefix_count.is_set || is_set(peer_prefix_count.yfilter)) leaf_name_data.push_back(peer_prefix_count.get_name_leafdata());
    if (restart_count.is_set || is_set(restart_count.yfilter)) leaf_name_data.push_back(restart_count.get_name_leafdata());
    if (time_left.is_set || is_set(time_left.yfilter)) leaf_name_data.push_back(time_left.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpAccounting::PeerStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpAccounting::PeerStatistics::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpAccounting::PeerStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(source != nullptr)
    {
        _children["source"] = source;
    }

    return _children;
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpAccounting::PeerStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-list")
    {
        interface_list = value;
        interface_list.value_namespace = name_space;
        interface_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-prefix-count")
    {
        peer_prefix_count = value;
        peer_prefix_count.value_namespace = name_space;
        peer_prefix_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-count")
    {
        restart_count = value;
        restart_count.value_namespace = name_space;
        restart_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-left")
    {
        time_left = value;
        time_left.value_namespace = name_space;
        time_left.value_namespace_prefix = name_space_prefix;
    }
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpAccounting::PeerStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "interface-list")
    {
        interface_list.yfilter = yfilter;
    }
    if(value_path == "peer-prefix-count")
    {
        peer_prefix_count.yfilter = yfilter;
    }
    if(value_path == "restart-count")
    {
        restart_count.yfilter = yfilter;
    }
    if(value_path == "time-left")
    {
        time_left.yfilter = yfilter;
    }
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpAccounting::PeerStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source" || name == "afi" || name == "state" || name == "interface-list" || name == "peer-prefix-count" || name == "restart-count" || name == "time-left")
        return true;
    return false;
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpAccounting::PeerStatistics::Source::Source()
    :
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "source"; yang_parent_name = "peer-statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpAccounting::PeerStatistics::Source::~Source()
{
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpAccounting::PeerStatistics::Source::has_data() const
{
    if (is_presence_container) return true;
    return ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpAccounting::PeerStatistics::Source::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpAccounting::PeerStatistics::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpAccounting::PeerStatistics::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpAccounting::PeerStatistics::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpAccounting::PeerStatistics::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpAccounting::PeerStatistics::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpAccounting::PeerStatistics::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpAccounting::PeerStatistics::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpTraffic::EigrpTraffic()
    :
    afi{YType::uint32, "afi"},
    as_number{YType::uint32, "as-number"},
    hellos_sent{YType::uint32, "hellos-sent"},
    hellos_received{YType::uint32, "hellos-received"},
    updates_sent{YType::uint32, "updates-sent"},
    updates_received{YType::uint32, "updates-received"},
    queries_sent{YType::uint32, "queries-sent"},
    queries_received{YType::uint32, "queries-received"},
    replies_sent{YType::uint32, "replies-sent"},
    replies_received{YType::uint32, "replies-received"},
    acks_sent{YType::uint32, "acks-sent"},
    acks_received{YType::uint32, "acks-received"},
    sia_queries_sent{YType::uint32, "sia-queries-sent"},
    sia_queries_received{YType::uint32, "sia-queries-received"},
    sia_replies_sent{YType::uint32, "sia-replies-sent"},
    sia_replies_received{YType::uint32, "sia-replies-received"},
    max_queue_depth{YType::uint32, "max-queue-depth"},
    queue_drops{YType::uint32, "queue-drops"}
{

    yang_name = "eigrp-traffic"; yang_parent_name = "as"; is_top_level_class = false; has_list_ancestor = true; 
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpTraffic::~EigrpTraffic()
{
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpTraffic::has_data() const
{
    if (is_presence_container) return true;
    return afi.is_set
	|| as_number.is_set
	|| hellos_sent.is_set
	|| hellos_received.is_set
	|| updates_sent.is_set
	|| updates_received.is_set
	|| queries_sent.is_set
	|| queries_received.is_set
	|| replies_sent.is_set
	|| replies_received.is_set
	|| acks_sent.is_set
	|| acks_received.is_set
	|| sia_queries_sent.is_set
	|| sia_queries_received.is_set
	|| sia_replies_sent.is_set
	|| sia_replies_received.is_set
	|| max_queue_depth.is_set
	|| queue_drops.is_set;
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpTraffic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(as_number.yfilter)
	|| ydk::is_set(hellos_sent.yfilter)
	|| ydk::is_set(hellos_received.yfilter)
	|| ydk::is_set(updates_sent.yfilter)
	|| ydk::is_set(updates_received.yfilter)
	|| ydk::is_set(queries_sent.yfilter)
	|| ydk::is_set(queries_received.yfilter)
	|| ydk::is_set(replies_sent.yfilter)
	|| ydk::is_set(replies_received.yfilter)
	|| ydk::is_set(acks_sent.yfilter)
	|| ydk::is_set(acks_received.yfilter)
	|| ydk::is_set(sia_queries_sent.yfilter)
	|| ydk::is_set(sia_queries_received.yfilter)
	|| ydk::is_set(sia_replies_sent.yfilter)
	|| ydk::is_set(sia_replies_received.yfilter)
	|| ydk::is_set(max_queue_depth.yfilter)
	|| ydk::is_set(queue_drops.yfilter);
}

std::string Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpTraffic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp-traffic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpTraffic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());
    if (hellos_sent.is_set || is_set(hellos_sent.yfilter)) leaf_name_data.push_back(hellos_sent.get_name_leafdata());
    if (hellos_received.is_set || is_set(hellos_received.yfilter)) leaf_name_data.push_back(hellos_received.get_name_leafdata());
    if (updates_sent.is_set || is_set(updates_sent.yfilter)) leaf_name_data.push_back(updates_sent.get_name_leafdata());
    if (updates_received.is_set || is_set(updates_received.yfilter)) leaf_name_data.push_back(updates_received.get_name_leafdata());
    if (queries_sent.is_set || is_set(queries_sent.yfilter)) leaf_name_data.push_back(queries_sent.get_name_leafdata());
    if (queries_received.is_set || is_set(queries_received.yfilter)) leaf_name_data.push_back(queries_received.get_name_leafdata());
    if (replies_sent.is_set || is_set(replies_sent.yfilter)) leaf_name_data.push_back(replies_sent.get_name_leafdata());
    if (replies_received.is_set || is_set(replies_received.yfilter)) leaf_name_data.push_back(replies_received.get_name_leafdata());
    if (acks_sent.is_set || is_set(acks_sent.yfilter)) leaf_name_data.push_back(acks_sent.get_name_leafdata());
    if (acks_received.is_set || is_set(acks_received.yfilter)) leaf_name_data.push_back(acks_received.get_name_leafdata());
    if (sia_queries_sent.is_set || is_set(sia_queries_sent.yfilter)) leaf_name_data.push_back(sia_queries_sent.get_name_leafdata());
    if (sia_queries_received.is_set || is_set(sia_queries_received.yfilter)) leaf_name_data.push_back(sia_queries_received.get_name_leafdata());
    if (sia_replies_sent.is_set || is_set(sia_replies_sent.yfilter)) leaf_name_data.push_back(sia_replies_sent.get_name_leafdata());
    if (sia_replies_received.is_set || is_set(sia_replies_received.yfilter)) leaf_name_data.push_back(sia_replies_received.get_name_leafdata());
    if (max_queue_depth.is_set || is_set(max_queue_depth.yfilter)) leaf_name_data.push_back(max_queue_depth.get_name_leafdata());
    if (queue_drops.is_set || is_set(queue_drops.yfilter)) leaf_name_data.push_back(queue_drops.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpTraffic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpTraffic::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpTraffic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hellos-sent")
    {
        hellos_sent = value;
        hellos_sent.value_namespace = name_space;
        hellos_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hellos-received")
    {
        hellos_received = value;
        hellos_received.value_namespace = name_space;
        hellos_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "updates-sent")
    {
        updates_sent = value;
        updates_sent.value_namespace = name_space;
        updates_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "updates-received")
    {
        updates_received = value;
        updates_received.value_namespace = name_space;
        updates_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "queries-sent")
    {
        queries_sent = value;
        queries_sent.value_namespace = name_space;
        queries_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "queries-received")
    {
        queries_received = value;
        queries_received.value_namespace = name_space;
        queries_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "replies-sent")
    {
        replies_sent = value;
        replies_sent.value_namespace = name_space;
        replies_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "replies-received")
    {
        replies_received = value;
        replies_received.value_namespace = name_space;
        replies_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acks-sent")
    {
        acks_sent = value;
        acks_sent.value_namespace = name_space;
        acks_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acks-received")
    {
        acks_received = value;
        acks_received.value_namespace = name_space;
        acks_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sia-queries-sent")
    {
        sia_queries_sent = value;
        sia_queries_sent.value_namespace = name_space;
        sia_queries_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sia-queries-received")
    {
        sia_queries_received = value;
        sia_queries_received.value_namespace = name_space;
        sia_queries_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sia-replies-sent")
    {
        sia_replies_sent = value;
        sia_replies_sent.value_namespace = name_space;
        sia_replies_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sia-replies-received")
    {
        sia_replies_received = value;
        sia_replies_received.value_namespace = name_space;
        sia_replies_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-queue-depth")
    {
        max_queue_depth = value;
        max_queue_depth.value_namespace = name_space;
        max_queue_depth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "queue-drops")
    {
        queue_drops = value;
        queue_drops.value_namespace = name_space;
        queue_drops.value_namespace_prefix = name_space_prefix;
    }
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpTraffic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
    if(value_path == "hellos-sent")
    {
        hellos_sent.yfilter = yfilter;
    }
    if(value_path == "hellos-received")
    {
        hellos_received.yfilter = yfilter;
    }
    if(value_path == "updates-sent")
    {
        updates_sent.yfilter = yfilter;
    }
    if(value_path == "updates-received")
    {
        updates_received.yfilter = yfilter;
    }
    if(value_path == "queries-sent")
    {
        queries_sent.yfilter = yfilter;
    }
    if(value_path == "queries-received")
    {
        queries_received.yfilter = yfilter;
    }
    if(value_path == "replies-sent")
    {
        replies_sent.yfilter = yfilter;
    }
    if(value_path == "replies-received")
    {
        replies_received.yfilter = yfilter;
    }
    if(value_path == "acks-sent")
    {
        acks_sent.yfilter = yfilter;
    }
    if(value_path == "acks-received")
    {
        acks_received.yfilter = yfilter;
    }
    if(value_path == "sia-queries-sent")
    {
        sia_queries_sent.yfilter = yfilter;
    }
    if(value_path == "sia-queries-received")
    {
        sia_queries_received.yfilter = yfilter;
    }
    if(value_path == "sia-replies-sent")
    {
        sia_replies_sent.yfilter = yfilter;
    }
    if(value_path == "sia-replies-received")
    {
        sia_replies_received.yfilter = yfilter;
    }
    if(value_path == "max-queue-depth")
    {
        max_queue_depth.yfilter = yfilter;
    }
    if(value_path == "queue-drops")
    {
        queue_drops.yfilter = yfilter;
    }
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpTraffic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi" || name == "as-number" || name == "hellos-sent" || name == "hellos-received" || name == "updates-sent" || name == "updates-received" || name == "queries-sent" || name == "queries-received" || name == "replies-sent" || name == "replies-received" || name == "acks-sent" || name == "acks-received" || name == "sia-queries-sent" || name == "sia-queries-received" || name == "sia-replies-sent" || name == "sia-replies-received" || name == "max-queue-depth" || name == "queue-drops")
        return true;
    return false;
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpTopologySummary::EigrpTopologySummary()
    :
    afi{YType::uint32, "afi"},
    as_number{YType::uint32, "as-number"},
    router_id{YType::str, "router-id"},
    thread_present{YType::boolean, "thread-present"},
    transmit_serial_number{YType::uint64, "transmit-serial-number"},
    next_serial_number{YType::uint64, "next-serial-number"},
    route_count{YType::uint32, "route-count"},
    path_count{YType::uint32, "path-count"},
    dummy_count{YType::uint32, "dummy-count"},
    ddb_name{YType::str, "ddb-name"},
    interface_count{YType::uint32, "interface-count"},
    handles_used{YType::uint32, "handles-used"},
    active_interface_count{YType::uint32, "active-interface-count"}
        ,
    quiescent(this, {})
{

    yang_name = "eigrp-topology-summary"; yang_parent_name = "as"; is_top_level_class = false; has_list_ancestor = true; 
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpTopologySummary::~EigrpTopologySummary()
{
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpTopologySummary::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<quiescent.len(); index++)
    {
        if(quiescent[index]->has_data())
            return true;
    }
    return afi.is_set
	|| as_number.is_set
	|| router_id.is_set
	|| thread_present.is_set
	|| transmit_serial_number.is_set
	|| next_serial_number.is_set
	|| route_count.is_set
	|| path_count.is_set
	|| dummy_count.is_set
	|| ddb_name.is_set
	|| interface_count.is_set
	|| handles_used.is_set
	|| active_interface_count.is_set;
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpTopologySummary::has_operation() const
{
    for (std::size_t index=0; index<quiescent.len(); index++)
    {
        if(quiescent[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(as_number.yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(thread_present.yfilter)
	|| ydk::is_set(transmit_serial_number.yfilter)
	|| ydk::is_set(next_serial_number.yfilter)
	|| ydk::is_set(route_count.yfilter)
	|| ydk::is_set(path_count.yfilter)
	|| ydk::is_set(dummy_count.yfilter)
	|| ydk::is_set(ddb_name.yfilter)
	|| ydk::is_set(interface_count.yfilter)
	|| ydk::is_set(handles_used.yfilter)
	|| ydk::is_set(active_interface_count.yfilter);
}

std::string Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpTopologySummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp-topology-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpTopologySummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (thread_present.is_set || is_set(thread_present.yfilter)) leaf_name_data.push_back(thread_present.get_name_leafdata());
    if (transmit_serial_number.is_set || is_set(transmit_serial_number.yfilter)) leaf_name_data.push_back(transmit_serial_number.get_name_leafdata());
    if (next_serial_number.is_set || is_set(next_serial_number.yfilter)) leaf_name_data.push_back(next_serial_number.get_name_leafdata());
    if (route_count.is_set || is_set(route_count.yfilter)) leaf_name_data.push_back(route_count.get_name_leafdata());
    if (path_count.is_set || is_set(path_count.yfilter)) leaf_name_data.push_back(path_count.get_name_leafdata());
    if (dummy_count.is_set || is_set(dummy_count.yfilter)) leaf_name_data.push_back(dummy_count.get_name_leafdata());
    if (ddb_name.is_set || is_set(ddb_name.yfilter)) leaf_name_data.push_back(ddb_name.get_name_leafdata());
    if (interface_count.is_set || is_set(interface_count.yfilter)) leaf_name_data.push_back(interface_count.get_name_leafdata());
    if (handles_used.is_set || is_set(handles_used.yfilter)) leaf_name_data.push_back(handles_used.get_name_leafdata());
    if (active_interface_count.is_set || is_set(active_interface_count.yfilter)) leaf_name_data.push_back(active_interface_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpTopologySummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "quiescent")
    {
        auto ent_ = std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpTopologySummary::Quiescent>();
        ent_->parent = this;
        quiescent.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpTopologySummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : quiescent.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpTopologySummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thread-present")
    {
        thread_present = value;
        thread_present.value_namespace = name_space;
        thread_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-serial-number")
    {
        transmit_serial_number = value;
        transmit_serial_number.value_namespace = name_space;
        transmit_serial_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-serial-number")
    {
        next_serial_number = value;
        next_serial_number.value_namespace = name_space;
        next_serial_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-count")
    {
        route_count = value;
        route_count.value_namespace = name_space;
        route_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-count")
    {
        path_count = value;
        path_count.value_namespace = name_space;
        path_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dummy-count")
    {
        dummy_count = value;
        dummy_count.value_namespace = name_space;
        dummy_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ddb-name")
    {
        ddb_name = value;
        ddb_name.value_namespace = name_space;
        ddb_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-count")
    {
        interface_count = value;
        interface_count.value_namespace = name_space;
        interface_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "handles-used")
    {
        handles_used = value;
        handles_used.value_namespace = name_space;
        handles_used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-interface-count")
    {
        active_interface_count = value;
        active_interface_count.value_namespace = name_space;
        active_interface_count.value_namespace_prefix = name_space_prefix;
    }
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpTopologySummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "thread-present")
    {
        thread_present.yfilter = yfilter;
    }
    if(value_path == "transmit-serial-number")
    {
        transmit_serial_number.yfilter = yfilter;
    }
    if(value_path == "next-serial-number")
    {
        next_serial_number.yfilter = yfilter;
    }
    if(value_path == "route-count")
    {
        route_count.yfilter = yfilter;
    }
    if(value_path == "path-count")
    {
        path_count.yfilter = yfilter;
    }
    if(value_path == "dummy-count")
    {
        dummy_count.yfilter = yfilter;
    }
    if(value_path == "ddb-name")
    {
        ddb_name.yfilter = yfilter;
    }
    if(value_path == "interface-count")
    {
        interface_count.yfilter = yfilter;
    }
    if(value_path == "handles-used")
    {
        handles_used.yfilter = yfilter;
    }
    if(value_path == "active-interface-count")
    {
        active_interface_count.yfilter = yfilter;
    }
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpTopologySummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "quiescent" || name == "afi" || name == "as-number" || name == "router-id" || name == "thread-present" || name == "transmit-serial-number" || name == "next-serial-number" || name == "route-count" || name == "path-count" || name == "dummy-count" || name == "ddb-name" || name == "interface-count" || name == "handles-used" || name == "active-interface-count")
        return true;
    return false;
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpTopologySummary::Quiescent::Quiescent()
    :
    quiescent_interface_list{YType::str, "quiescent-interface-list"}
{

    yang_name = "quiescent"; yang_parent_name = "eigrp-topology-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpTopologySummary::Quiescent::~Quiescent()
{
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpTopologySummary::Quiescent::has_data() const
{
    if (is_presence_container) return true;
    return quiescent_interface_list.is_set;
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpTopologySummary::Quiescent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(quiescent_interface_list.yfilter);
}

std::string Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpTopologySummary::Quiescent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "quiescent";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpTopologySummary::Quiescent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (quiescent_interface_list.is_set || is_set(quiescent_interface_list.yfilter)) leaf_name_data.push_back(quiescent_interface_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpTopologySummary::Quiescent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpTopologySummary::Quiescent::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpTopologySummary::Quiescent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "quiescent-interface-list")
    {
        quiescent_interface_list = value;
        quiescent_interface_list.value_namespace = name_space;
        quiescent_interface_list.value_namespace_prefix = name_space_prefix;
    }
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpTopologySummary::Quiescent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "quiescent-interface-list")
    {
        quiescent_interface_list.yfilter = yfilter;
    }
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpTopologySummary::Quiescent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "quiescent-interface-list")
        return true;
    return false;
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::Interfaces::Interfaces()
    :
    interface(this, {"interface_name"})
{

    yang_name = "interfaces"; yang_parent_name = "as"; is_top_level_class = false; has_list_ancestor = true; 
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::Interfaces::~Interfaces()
{
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::Interfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto ent_ = std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::Interfaces::Interface>();
        ent_->parent = this;
        interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    afi{YType::uint32, "afi"},
    as_number{YType::uint32, "as-number"},
    peer_count{YType::uint32, "peer-count"},
    classic_peer_count{YType::uint32, "classic-peer-count"},
    wide_peer_count{YType::uint32, "wide-peer-count"},
    unreliable_transmits{YType::uint32, "unreliable-transmits"},
    reliable_transmits{YType::uint32, "reliable-transmits"},
    total_srtt{YType::uint32, "total-srtt"},
    unreliable_send_interval{YType::uint32, "unreliable-send-interval"},
    reliable_send_interval{YType::uint32, "reliable-send-interval"},
    last_mc_flow_delay{YType::uint32, "last-mc-flow-delay"},
    pending_routes{YType::uint32, "pending-routes"},
    hello_interval{YType::uint32, "hello-interval"},
    holdtime{YType::uint32, "holdtime"},
    bfd_enabled{YType::boolean, "bfd-enabled"},
    bfd_interval{YType::uint32, "bfd-interval"},
    bfd_multiplier{YType::uint32, "bfd-multiplier"},
    serial_number_present{YType::boolean, "serial-number-present"},
    transmit_serial_number{YType::uint64, "transmit-serial-number"},
    packetize_pending{YType::boolean, "packetize-pending"},
    unreliable_multicast_sent{YType::uint32, "unreliable-multicast-sent"},
    reliable_multicast_sent{YType::uint32, "reliable-multicast-sent"},
    unreliable_unicast_sent{YType::uint32, "unreliable-unicast-sent"},
    reliable_unicast_sent{YType::uint32, "reliable-unicast-sent"},
    multicast_exceptions_sent{YType::uint32, "multicast-exceptions-sent"},
    cr_packets_sent{YType::uint32, "cr-packets-sent"},
    acks_suppressed{YType::uint32, "acks-suppressed"},
    retransmissions_sent{YType::uint32, "retransmissions-sent"},
    out_of_sequence_received{YType::uint32, "out-of-sequence-received"},
    stub_interface{YType::boolean, "stub-interface"},
    next_hop_self_enabled{YType::boolean, "next-hop-self-enabled"},
    split_horizon_enabled{YType::boolean, "split-horizon-enabled"},
    passive_interface{YType::boolean, "passive-interface"},
    bandwidth_percent{YType::uint32, "bandwidth-percent"},
    site_of_origin_type{YType::enumeration, "site-of-origin-type"},
    site_of_origin{YType::str, "site-of-origin"},
    auth_mode{YType::uint32, "auth-mode"},
    auth_keychain{YType::str, "auth-keychain"},
    auth_key_exists{YType::boolean, "auth-key-exists"},
    auth_key_md5{YType::boolean, "auth-key-md5"},
    auth_key_id{YType::uint64, "auth-key-id"},
    total_pkt_recvd{YType::uint32, "total-pkt-recvd"},
    pkt_drop_wrong_kc{YType::uint32, "pkt-drop-wrong-kc"},
    pkt_drop_no_auth{YType::uint32, "pkt-drop-no-auth"},
    pkt_drop_invalid_auth{YType::uint32, "pkt-drop-invalid-auth"},
    pkt_accepted_valid_auth{YType::uint32, "pkt-accepted-valid-auth"},
    bandwidth{YType::uint32, "bandwidth"},
    bandwidth64{YType::uint64, "bandwidth64"},
    delay{YType::uint32, "delay"},
    delay64{YType::uint64, "delay64"},
    delay_unit{YType::enumeration, "delay-unit"},
    reliability{YType::uint32, "reliability"},
    load{YType::uint32, "load"},
    mtu{YType::uint32, "mtu"},
    configured_bandwidth{YType::uint32, "configured-bandwidth"},
    configured_bandwidth64{YType::uint64, "configured-bandwidth64"},
    configured_delay{YType::uint32, "configured-delay"},
    configured_delay64{YType::uint64, "configured-delay64"},
    configured_delay_unit{YType::enumeration, "configured-delay-unit"},
    configured_reliability{YType::uint32, "configured-reliability"},
    configured_load{YType::uint32, "configured-load"},
    configured_bandwidth_flag{YType::boolean, "configured-bandwidth-flag"},
    configured_delay_flag{YType::boolean, "configured-delay-flag"},
    configured_reliability_flag{YType::boolean, "configured-reliability-flag"},
    configured_load_flag{YType::boolean, "configured-load-flag"},
    up{YType::boolean, "up"},
    type_supported{YType::boolean, "type-supported"},
    ital_record_found{YType::boolean, "ital-record-found"},
    configured{YType::boolean, "configured"},
    multicast_enabled{YType::boolean, "multicast-enabled"},
    socket_setup{YType::boolean, "socket-setup"},
    lpts_socket_setup{YType::boolean, "lpts-socket-setup"},
    primary_ipv4_address{YType::str, "primary-ipv4-address"},
    ipv6_link_local_addr{YType::str, "ipv6-link-local-addr"},
    primary_prefix_length{YType::uint32, "primary-prefix-length"},
    interface_handle{YType::uint32, "interface-handle"},
    interface_type{YType::uint32, "interface-type"},
    configured_items{YType::uint32, "configured-items"},
    is_passive_enabled{YType::boolean, "is-passive-enabled"},
    is_passive_disabled{YType::boolean, "is-passive-disabled"}
        ,
    static_neighbor(this, {})
{

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = true; 
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::Interfaces::Interface::~Interface()
{
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::Interfaces::Interface::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<static_neighbor.len(); index++)
    {
        if(static_neighbor[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| afi.is_set
	|| as_number.is_set
	|| peer_count.is_set
	|| classic_peer_count.is_set
	|| wide_peer_count.is_set
	|| unreliable_transmits.is_set
	|| reliable_transmits.is_set
	|| total_srtt.is_set
	|| unreliable_send_interval.is_set
	|| reliable_send_interval.is_set
	|| last_mc_flow_delay.is_set
	|| pending_routes.is_set
	|| hello_interval.is_set
	|| holdtime.is_set
	|| bfd_enabled.is_set
	|| bfd_interval.is_set
	|| bfd_multiplier.is_set
	|| serial_number_present.is_set
	|| transmit_serial_number.is_set
	|| packetize_pending.is_set
	|| unreliable_multicast_sent.is_set
	|| reliable_multicast_sent.is_set
	|| unreliable_unicast_sent.is_set
	|| reliable_unicast_sent.is_set
	|| multicast_exceptions_sent.is_set
	|| cr_packets_sent.is_set
	|| acks_suppressed.is_set
	|| retransmissions_sent.is_set
	|| out_of_sequence_received.is_set
	|| stub_interface.is_set
	|| next_hop_self_enabled.is_set
	|| split_horizon_enabled.is_set
	|| passive_interface.is_set
	|| bandwidth_percent.is_set
	|| site_of_origin_type.is_set
	|| site_of_origin.is_set
	|| auth_mode.is_set
	|| auth_keychain.is_set
	|| auth_key_exists.is_set
	|| auth_key_md5.is_set
	|| auth_key_id.is_set
	|| total_pkt_recvd.is_set
	|| pkt_drop_wrong_kc.is_set
	|| pkt_drop_no_auth.is_set
	|| pkt_drop_invalid_auth.is_set
	|| pkt_accepted_valid_auth.is_set
	|| bandwidth.is_set
	|| bandwidth64.is_set
	|| delay.is_set
	|| delay64.is_set
	|| delay_unit.is_set
	|| reliability.is_set
	|| load.is_set
	|| mtu.is_set
	|| configured_bandwidth.is_set
	|| configured_bandwidth64.is_set
	|| configured_delay.is_set
	|| configured_delay64.is_set
	|| configured_delay_unit.is_set
	|| configured_reliability.is_set
	|| configured_load.is_set
	|| configured_bandwidth_flag.is_set
	|| configured_delay_flag.is_set
	|| configured_reliability_flag.is_set
	|| configured_load_flag.is_set
	|| up.is_set
	|| type_supported.is_set
	|| ital_record_found.is_set
	|| configured.is_set
	|| multicast_enabled.is_set
	|| socket_setup.is_set
	|| lpts_socket_setup.is_set
	|| primary_ipv4_address.is_set
	|| ipv6_link_local_addr.is_set
	|| primary_prefix_length.is_set
	|| interface_handle.is_set
	|| interface_type.is_set
	|| configured_items.is_set
	|| is_passive_enabled.is_set
	|| is_passive_disabled.is_set;
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::Interfaces::Interface::has_operation() const
{
    for (std::size_t index=0; index<static_neighbor.len(); index++)
    {
        if(static_neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(as_number.yfilter)
	|| ydk::is_set(peer_count.yfilter)
	|| ydk::is_set(classic_peer_count.yfilter)
	|| ydk::is_set(wide_peer_count.yfilter)
	|| ydk::is_set(unreliable_transmits.yfilter)
	|| ydk::is_set(reliable_transmits.yfilter)
	|| ydk::is_set(total_srtt.yfilter)
	|| ydk::is_set(unreliable_send_interval.yfilter)
	|| ydk::is_set(reliable_send_interval.yfilter)
	|| ydk::is_set(last_mc_flow_delay.yfilter)
	|| ydk::is_set(pending_routes.yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(holdtime.yfilter)
	|| ydk::is_set(bfd_enabled.yfilter)
	|| ydk::is_set(bfd_interval.yfilter)
	|| ydk::is_set(bfd_multiplier.yfilter)
	|| ydk::is_set(serial_number_present.yfilter)
	|| ydk::is_set(transmit_serial_number.yfilter)
	|| ydk::is_set(packetize_pending.yfilter)
	|| ydk::is_set(unreliable_multicast_sent.yfilter)
	|| ydk::is_set(reliable_multicast_sent.yfilter)
	|| ydk::is_set(unreliable_unicast_sent.yfilter)
	|| ydk::is_set(reliable_unicast_sent.yfilter)
	|| ydk::is_set(multicast_exceptions_sent.yfilter)
	|| ydk::is_set(cr_packets_sent.yfilter)
	|| ydk::is_set(acks_suppressed.yfilter)
	|| ydk::is_set(retransmissions_sent.yfilter)
	|| ydk::is_set(out_of_sequence_received.yfilter)
	|| ydk::is_set(stub_interface.yfilter)
	|| ydk::is_set(next_hop_self_enabled.yfilter)
	|| ydk::is_set(split_horizon_enabled.yfilter)
	|| ydk::is_set(passive_interface.yfilter)
	|| ydk::is_set(bandwidth_percent.yfilter)
	|| ydk::is_set(site_of_origin_type.yfilter)
	|| ydk::is_set(site_of_origin.yfilter)
	|| ydk::is_set(auth_mode.yfilter)
	|| ydk::is_set(auth_keychain.yfilter)
	|| ydk::is_set(auth_key_exists.yfilter)
	|| ydk::is_set(auth_key_md5.yfilter)
	|| ydk::is_set(auth_key_id.yfilter)
	|| ydk::is_set(total_pkt_recvd.yfilter)
	|| ydk::is_set(pkt_drop_wrong_kc.yfilter)
	|| ydk::is_set(pkt_drop_no_auth.yfilter)
	|| ydk::is_set(pkt_drop_invalid_auth.yfilter)
	|| ydk::is_set(pkt_accepted_valid_auth.yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(bandwidth64.yfilter)
	|| ydk::is_set(delay.yfilter)
	|| ydk::is_set(delay64.yfilter)
	|| ydk::is_set(delay_unit.yfilter)
	|| ydk::is_set(reliability.yfilter)
	|| ydk::is_set(load.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(configured_bandwidth.yfilter)
	|| ydk::is_set(configured_bandwidth64.yfilter)
	|| ydk::is_set(configured_delay.yfilter)
	|| ydk::is_set(configured_delay64.yfilter)
	|| ydk::is_set(configured_delay_unit.yfilter)
	|| ydk::is_set(configured_reliability.yfilter)
	|| ydk::is_set(configured_load.yfilter)
	|| ydk::is_set(configured_bandwidth_flag.yfilter)
	|| ydk::is_set(configured_delay_flag.yfilter)
	|| ydk::is_set(configured_reliability_flag.yfilter)
	|| ydk::is_set(configured_load_flag.yfilter)
	|| ydk::is_set(up.yfilter)
	|| ydk::is_set(type_supported.yfilter)
	|| ydk::is_set(ital_record_found.yfilter)
	|| ydk::is_set(configured.yfilter)
	|| ydk::is_set(multicast_enabled.yfilter)
	|| ydk::is_set(socket_setup.yfilter)
	|| ydk::is_set(lpts_socket_setup.yfilter)
	|| ydk::is_set(primary_ipv4_address.yfilter)
	|| ydk::is_set(ipv6_link_local_addr.yfilter)
	|| ydk::is_set(primary_prefix_length.yfilter)
	|| ydk::is_set(interface_handle.yfilter)
	|| ydk::is_set(interface_type.yfilter)
	|| ydk::is_set(configured_items.yfilter)
	|| ydk::is_set(is_passive_enabled.yfilter)
	|| ydk::is_set(is_passive_disabled.yfilter);
}

std::string Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());
    if (peer_count.is_set || is_set(peer_count.yfilter)) leaf_name_data.push_back(peer_count.get_name_leafdata());
    if (classic_peer_count.is_set || is_set(classic_peer_count.yfilter)) leaf_name_data.push_back(classic_peer_count.get_name_leafdata());
    if (wide_peer_count.is_set || is_set(wide_peer_count.yfilter)) leaf_name_data.push_back(wide_peer_count.get_name_leafdata());
    if (unreliable_transmits.is_set || is_set(unreliable_transmits.yfilter)) leaf_name_data.push_back(unreliable_transmits.get_name_leafdata());
    if (reliable_transmits.is_set || is_set(reliable_transmits.yfilter)) leaf_name_data.push_back(reliable_transmits.get_name_leafdata());
    if (total_srtt.is_set || is_set(total_srtt.yfilter)) leaf_name_data.push_back(total_srtt.get_name_leafdata());
    if (unreliable_send_interval.is_set || is_set(unreliable_send_interval.yfilter)) leaf_name_data.push_back(unreliable_send_interval.get_name_leafdata());
    if (reliable_send_interval.is_set || is_set(reliable_send_interval.yfilter)) leaf_name_data.push_back(reliable_send_interval.get_name_leafdata());
    if (last_mc_flow_delay.is_set || is_set(last_mc_flow_delay.yfilter)) leaf_name_data.push_back(last_mc_flow_delay.get_name_leafdata());
    if (pending_routes.is_set || is_set(pending_routes.yfilter)) leaf_name_data.push_back(pending_routes.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (holdtime.is_set || is_set(holdtime.yfilter)) leaf_name_data.push_back(holdtime.get_name_leafdata());
    if (bfd_enabled.is_set || is_set(bfd_enabled.yfilter)) leaf_name_data.push_back(bfd_enabled.get_name_leafdata());
    if (bfd_interval.is_set || is_set(bfd_interval.yfilter)) leaf_name_data.push_back(bfd_interval.get_name_leafdata());
    if (bfd_multiplier.is_set || is_set(bfd_multiplier.yfilter)) leaf_name_data.push_back(bfd_multiplier.get_name_leafdata());
    if (serial_number_present.is_set || is_set(serial_number_present.yfilter)) leaf_name_data.push_back(serial_number_present.get_name_leafdata());
    if (transmit_serial_number.is_set || is_set(transmit_serial_number.yfilter)) leaf_name_data.push_back(transmit_serial_number.get_name_leafdata());
    if (packetize_pending.is_set || is_set(packetize_pending.yfilter)) leaf_name_data.push_back(packetize_pending.get_name_leafdata());
    if (unreliable_multicast_sent.is_set || is_set(unreliable_multicast_sent.yfilter)) leaf_name_data.push_back(unreliable_multicast_sent.get_name_leafdata());
    if (reliable_multicast_sent.is_set || is_set(reliable_multicast_sent.yfilter)) leaf_name_data.push_back(reliable_multicast_sent.get_name_leafdata());
    if (unreliable_unicast_sent.is_set || is_set(unreliable_unicast_sent.yfilter)) leaf_name_data.push_back(unreliable_unicast_sent.get_name_leafdata());
    if (reliable_unicast_sent.is_set || is_set(reliable_unicast_sent.yfilter)) leaf_name_data.push_back(reliable_unicast_sent.get_name_leafdata());
    if (multicast_exceptions_sent.is_set || is_set(multicast_exceptions_sent.yfilter)) leaf_name_data.push_back(multicast_exceptions_sent.get_name_leafdata());
    if (cr_packets_sent.is_set || is_set(cr_packets_sent.yfilter)) leaf_name_data.push_back(cr_packets_sent.get_name_leafdata());
    if (acks_suppressed.is_set || is_set(acks_suppressed.yfilter)) leaf_name_data.push_back(acks_suppressed.get_name_leafdata());
    if (retransmissions_sent.is_set || is_set(retransmissions_sent.yfilter)) leaf_name_data.push_back(retransmissions_sent.get_name_leafdata());
    if (out_of_sequence_received.is_set || is_set(out_of_sequence_received.yfilter)) leaf_name_data.push_back(out_of_sequence_received.get_name_leafdata());
    if (stub_interface.is_set || is_set(stub_interface.yfilter)) leaf_name_data.push_back(stub_interface.get_name_leafdata());
    if (next_hop_self_enabled.is_set || is_set(next_hop_self_enabled.yfilter)) leaf_name_data.push_back(next_hop_self_enabled.get_name_leafdata());
    if (split_horizon_enabled.is_set || is_set(split_horizon_enabled.yfilter)) leaf_name_data.push_back(split_horizon_enabled.get_name_leafdata());
    if (passive_interface.is_set || is_set(passive_interface.yfilter)) leaf_name_data.push_back(passive_interface.get_name_leafdata());
    if (bandwidth_percent.is_set || is_set(bandwidth_percent.yfilter)) leaf_name_data.push_back(bandwidth_percent.get_name_leafdata());
    if (site_of_origin_type.is_set || is_set(site_of_origin_type.yfilter)) leaf_name_data.push_back(site_of_origin_type.get_name_leafdata());
    if (site_of_origin.is_set || is_set(site_of_origin.yfilter)) leaf_name_data.push_back(site_of_origin.get_name_leafdata());
    if (auth_mode.is_set || is_set(auth_mode.yfilter)) leaf_name_data.push_back(auth_mode.get_name_leafdata());
    if (auth_keychain.is_set || is_set(auth_keychain.yfilter)) leaf_name_data.push_back(auth_keychain.get_name_leafdata());
    if (auth_key_exists.is_set || is_set(auth_key_exists.yfilter)) leaf_name_data.push_back(auth_key_exists.get_name_leafdata());
    if (auth_key_md5.is_set || is_set(auth_key_md5.yfilter)) leaf_name_data.push_back(auth_key_md5.get_name_leafdata());
    if (auth_key_id.is_set || is_set(auth_key_id.yfilter)) leaf_name_data.push_back(auth_key_id.get_name_leafdata());
    if (total_pkt_recvd.is_set || is_set(total_pkt_recvd.yfilter)) leaf_name_data.push_back(total_pkt_recvd.get_name_leafdata());
    if (pkt_drop_wrong_kc.is_set || is_set(pkt_drop_wrong_kc.yfilter)) leaf_name_data.push_back(pkt_drop_wrong_kc.get_name_leafdata());
    if (pkt_drop_no_auth.is_set || is_set(pkt_drop_no_auth.yfilter)) leaf_name_data.push_back(pkt_drop_no_auth.get_name_leafdata());
    if (pkt_drop_invalid_auth.is_set || is_set(pkt_drop_invalid_auth.yfilter)) leaf_name_data.push_back(pkt_drop_invalid_auth.get_name_leafdata());
    if (pkt_accepted_valid_auth.is_set || is_set(pkt_accepted_valid_auth.yfilter)) leaf_name_data.push_back(pkt_accepted_valid_auth.get_name_leafdata());
    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (bandwidth64.is_set || is_set(bandwidth64.yfilter)) leaf_name_data.push_back(bandwidth64.get_name_leafdata());
    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());
    if (delay64.is_set || is_set(delay64.yfilter)) leaf_name_data.push_back(delay64.get_name_leafdata());
    if (delay_unit.is_set || is_set(delay_unit.yfilter)) leaf_name_data.push_back(delay_unit.get_name_leafdata());
    if (reliability.is_set || is_set(reliability.yfilter)) leaf_name_data.push_back(reliability.get_name_leafdata());
    if (load.is_set || is_set(load.yfilter)) leaf_name_data.push_back(load.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (configured_bandwidth.is_set || is_set(configured_bandwidth.yfilter)) leaf_name_data.push_back(configured_bandwidth.get_name_leafdata());
    if (configured_bandwidth64.is_set || is_set(configured_bandwidth64.yfilter)) leaf_name_data.push_back(configured_bandwidth64.get_name_leafdata());
    if (configured_delay.is_set || is_set(configured_delay.yfilter)) leaf_name_data.push_back(configured_delay.get_name_leafdata());
    if (configured_delay64.is_set || is_set(configured_delay64.yfilter)) leaf_name_data.push_back(configured_delay64.get_name_leafdata());
    if (configured_delay_unit.is_set || is_set(configured_delay_unit.yfilter)) leaf_name_data.push_back(configured_delay_unit.get_name_leafdata());
    if (configured_reliability.is_set || is_set(configured_reliability.yfilter)) leaf_name_data.push_back(configured_reliability.get_name_leafdata());
    if (configured_load.is_set || is_set(configured_load.yfilter)) leaf_name_data.push_back(configured_load.get_name_leafdata());
    if (configured_bandwidth_flag.is_set || is_set(configured_bandwidth_flag.yfilter)) leaf_name_data.push_back(configured_bandwidth_flag.get_name_leafdata());
    if (configured_delay_flag.is_set || is_set(configured_delay_flag.yfilter)) leaf_name_data.push_back(configured_delay_flag.get_name_leafdata());
    if (configured_reliability_flag.is_set || is_set(configured_reliability_flag.yfilter)) leaf_name_data.push_back(configured_reliability_flag.get_name_leafdata());
    if (configured_load_flag.is_set || is_set(configured_load_flag.yfilter)) leaf_name_data.push_back(configured_load_flag.get_name_leafdata());
    if (up.is_set || is_set(up.yfilter)) leaf_name_data.push_back(up.get_name_leafdata());
    if (type_supported.is_set || is_set(type_supported.yfilter)) leaf_name_data.push_back(type_supported.get_name_leafdata());
    if (ital_record_found.is_set || is_set(ital_record_found.yfilter)) leaf_name_data.push_back(ital_record_found.get_name_leafdata());
    if (configured.is_set || is_set(configured.yfilter)) leaf_name_data.push_back(configured.get_name_leafdata());
    if (multicast_enabled.is_set || is_set(multicast_enabled.yfilter)) leaf_name_data.push_back(multicast_enabled.get_name_leafdata());
    if (socket_setup.is_set || is_set(socket_setup.yfilter)) leaf_name_data.push_back(socket_setup.get_name_leafdata());
    if (lpts_socket_setup.is_set || is_set(lpts_socket_setup.yfilter)) leaf_name_data.push_back(lpts_socket_setup.get_name_leafdata());
    if (primary_ipv4_address.is_set || is_set(primary_ipv4_address.yfilter)) leaf_name_data.push_back(primary_ipv4_address.get_name_leafdata());
    if (ipv6_link_local_addr.is_set || is_set(ipv6_link_local_addr.yfilter)) leaf_name_data.push_back(ipv6_link_local_addr.get_name_leafdata());
    if (primary_prefix_length.is_set || is_set(primary_prefix_length.yfilter)) leaf_name_data.push_back(primary_prefix_length.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (interface_type.is_set || is_set(interface_type.yfilter)) leaf_name_data.push_back(interface_type.get_name_leafdata());
    if (configured_items.is_set || is_set(configured_items.yfilter)) leaf_name_data.push_back(configured_items.get_name_leafdata());
    if (is_passive_enabled.is_set || is_set(is_passive_enabled.yfilter)) leaf_name_data.push_back(is_passive_enabled.get_name_leafdata());
    if (is_passive_disabled.is_set || is_set(is_passive_disabled.yfilter)) leaf_name_data.push_back(is_passive_disabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "static-neighbor")
    {
        auto ent_ = std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::Interfaces::Interface::StaticNeighbor>();
        ent_->parent = this;
        static_neighbor.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : static_neighbor.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-count")
    {
        peer_count = value;
        peer_count.value_namespace = name_space;
        peer_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "classic-peer-count")
    {
        classic_peer_count = value;
        classic_peer_count.value_namespace = name_space;
        classic_peer_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wide-peer-count")
    {
        wide_peer_count = value;
        wide_peer_count.value_namespace = name_space;
        wide_peer_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unreliable-transmits")
    {
        unreliable_transmits = value;
        unreliable_transmits.value_namespace = name_space;
        unreliable_transmits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reliable-transmits")
    {
        reliable_transmits = value;
        reliable_transmits.value_namespace = name_space;
        reliable_transmits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-srtt")
    {
        total_srtt = value;
        total_srtt.value_namespace = name_space;
        total_srtt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unreliable-send-interval")
    {
        unreliable_send_interval = value;
        unreliable_send_interval.value_namespace = name_space;
        unreliable_send_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reliable-send-interval")
    {
        reliable_send_interval = value;
        reliable_send_interval.value_namespace = name_space;
        reliable_send_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-mc-flow-delay")
    {
        last_mc_flow_delay = value;
        last_mc_flow_delay.value_namespace = name_space;
        last_mc_flow_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pending-routes")
    {
        pending_routes = value;
        pending_routes.value_namespace = name_space;
        pending_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
        hello_interval.value_namespace = name_space;
        hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "holdtime")
    {
        holdtime = value;
        holdtime.value_namespace = name_space;
        holdtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-enabled")
    {
        bfd_enabled = value;
        bfd_enabled.value_namespace = name_space;
        bfd_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-interval")
    {
        bfd_interval = value;
        bfd_interval.value_namespace = name_space;
        bfd_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-multiplier")
    {
        bfd_multiplier = value;
        bfd_multiplier.value_namespace = name_space;
        bfd_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serial-number-present")
    {
        serial_number_present = value;
        serial_number_present.value_namespace = name_space;
        serial_number_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-serial-number")
    {
        transmit_serial_number = value;
        transmit_serial_number.value_namespace = name_space;
        transmit_serial_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packetize-pending")
    {
        packetize_pending = value;
        packetize_pending.value_namespace = name_space;
        packetize_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unreliable-multicast-sent")
    {
        unreliable_multicast_sent = value;
        unreliable_multicast_sent.value_namespace = name_space;
        unreliable_multicast_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reliable-multicast-sent")
    {
        reliable_multicast_sent = value;
        reliable_multicast_sent.value_namespace = name_space;
        reliable_multicast_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unreliable-unicast-sent")
    {
        unreliable_unicast_sent = value;
        unreliable_unicast_sent.value_namespace = name_space;
        unreliable_unicast_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reliable-unicast-sent")
    {
        reliable_unicast_sent = value;
        reliable_unicast_sent.value_namespace = name_space;
        reliable_unicast_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-exceptions-sent")
    {
        multicast_exceptions_sent = value;
        multicast_exceptions_sent.value_namespace = name_space;
        multicast_exceptions_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cr-packets-sent")
    {
        cr_packets_sent = value;
        cr_packets_sent.value_namespace = name_space;
        cr_packets_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acks-suppressed")
    {
        acks_suppressed = value;
        acks_suppressed.value_namespace = name_space;
        acks_suppressed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmissions-sent")
    {
        retransmissions_sent = value;
        retransmissions_sent.value_namespace = name_space;
        retransmissions_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-of-sequence-received")
    {
        out_of_sequence_received = value;
        out_of_sequence_received.value_namespace = name_space;
        out_of_sequence_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stub-interface")
    {
        stub_interface = value;
        stub_interface.value_namespace = name_space;
        stub_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-self-enabled")
    {
        next_hop_self_enabled = value;
        next_hop_self_enabled.value_namespace = name_space;
        next_hop_self_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "split-horizon-enabled")
    {
        split_horizon_enabled = value;
        split_horizon_enabled.value_namespace = name_space;
        split_horizon_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passive-interface")
    {
        passive_interface = value;
        passive_interface.value_namespace = name_space;
        passive_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-percent")
    {
        bandwidth_percent = value;
        bandwidth_percent.value_namespace = name_space;
        bandwidth_percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "site-of-origin-type")
    {
        site_of_origin_type = value;
        site_of_origin_type.value_namespace = name_space;
        site_of_origin_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "site-of-origin")
    {
        site_of_origin = value;
        site_of_origin.value_namespace = name_space;
        site_of_origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auth-mode")
    {
        auth_mode = value;
        auth_mode.value_namespace = name_space;
        auth_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auth-keychain")
    {
        auth_keychain = value;
        auth_keychain.value_namespace = name_space;
        auth_keychain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auth-key-exists")
    {
        auth_key_exists = value;
        auth_key_exists.value_namespace = name_space;
        auth_key_exists.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auth-key-md5")
    {
        auth_key_md5 = value;
        auth_key_md5.value_namespace = name_space;
        auth_key_md5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auth-key-id")
    {
        auth_key_id = value;
        auth_key_id.value_namespace = name_space;
        auth_key_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-pkt-recvd")
    {
        total_pkt_recvd = value;
        total_pkt_recvd.value_namespace = name_space;
        total_pkt_recvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkt-drop-wrong-kc")
    {
        pkt_drop_wrong_kc = value;
        pkt_drop_wrong_kc.value_namespace = name_space;
        pkt_drop_wrong_kc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkt-drop-no-auth")
    {
        pkt_drop_no_auth = value;
        pkt_drop_no_auth.value_namespace = name_space;
        pkt_drop_no_auth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkt-drop-invalid-auth")
    {
        pkt_drop_invalid_auth = value;
        pkt_drop_invalid_auth.value_namespace = name_space;
        pkt_drop_invalid_auth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkt-accepted-valid-auth")
    {
        pkt_accepted_valid_auth = value;
        pkt_accepted_valid_auth.value_namespace = name_space;
        pkt_accepted_valid_auth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth64")
    {
        bandwidth64 = value;
        bandwidth64.value_namespace = name_space;
        bandwidth64.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay64")
    {
        delay64 = value;
        delay64.value_namespace = name_space;
        delay64.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay-unit")
    {
        delay_unit = value;
        delay_unit.value_namespace = name_space;
        delay_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reliability")
    {
        reliability = value;
        reliability.value_namespace = name_space;
        reliability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load")
    {
        load = value;
        load.value_namespace = name_space;
        load.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-bandwidth")
    {
        configured_bandwidth = value;
        configured_bandwidth.value_namespace = name_space;
        configured_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-bandwidth64")
    {
        configured_bandwidth64 = value;
        configured_bandwidth64.value_namespace = name_space;
        configured_bandwidth64.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-delay")
    {
        configured_delay = value;
        configured_delay.value_namespace = name_space;
        configured_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-delay64")
    {
        configured_delay64 = value;
        configured_delay64.value_namespace = name_space;
        configured_delay64.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-delay-unit")
    {
        configured_delay_unit = value;
        configured_delay_unit.value_namespace = name_space;
        configured_delay_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-reliability")
    {
        configured_reliability = value;
        configured_reliability.value_namespace = name_space;
        configured_reliability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-load")
    {
        configured_load = value;
        configured_load.value_namespace = name_space;
        configured_load.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-bandwidth-flag")
    {
        configured_bandwidth_flag = value;
        configured_bandwidth_flag.value_namespace = name_space;
        configured_bandwidth_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-delay-flag")
    {
        configured_delay_flag = value;
        configured_delay_flag.value_namespace = name_space;
        configured_delay_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-reliability-flag")
    {
        configured_reliability_flag = value;
        configured_reliability_flag.value_namespace = name_space;
        configured_reliability_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-load-flag")
    {
        configured_load_flag = value;
        configured_load_flag.value_namespace = name_space;
        configured_load_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up")
    {
        up = value;
        up.value_namespace = name_space;
        up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type-supported")
    {
        type_supported = value;
        type_supported.value_namespace = name_space;
        type_supported.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ital-record-found")
    {
        ital_record_found = value;
        ital_record_found.value_namespace = name_space;
        ital_record_found.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured")
    {
        configured = value;
        configured.value_namespace = name_space;
        configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-enabled")
    {
        multicast_enabled = value;
        multicast_enabled.value_namespace = name_space;
        multicast_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "socket-setup")
    {
        socket_setup = value;
        socket_setup.value_namespace = name_space;
        socket_setup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lpts-socket-setup")
    {
        lpts_socket_setup = value;
        lpts_socket_setup.value_namespace = name_space;
        lpts_socket_setup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary-ipv4-address")
    {
        primary_ipv4_address = value;
        primary_ipv4_address.value_namespace = name_space;
        primary_ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-link-local-addr")
    {
        ipv6_link_local_addr = value;
        ipv6_link_local_addr.value_namespace = name_space;
        ipv6_link_local_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary-prefix-length")
    {
        primary_prefix_length = value;
        primary_prefix_length.value_namespace = name_space;
        primary_prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-type")
    {
        interface_type = value;
        interface_type.value_namespace = name_space;
        interface_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-items")
    {
        configured_items = value;
        configured_items.value_namespace = name_space;
        configured_items.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-passive-enabled")
    {
        is_passive_enabled = value;
        is_passive_enabled.value_namespace = name_space;
        is_passive_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-passive-disabled")
    {
        is_passive_disabled = value;
        is_passive_disabled.value_namespace = name_space;
        is_passive_disabled.value_namespace_prefix = name_space_prefix;
    }
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
    if(value_path == "peer-count")
    {
        peer_count.yfilter = yfilter;
    }
    if(value_path == "classic-peer-count")
    {
        classic_peer_count.yfilter = yfilter;
    }
    if(value_path == "wide-peer-count")
    {
        wide_peer_count.yfilter = yfilter;
    }
    if(value_path == "unreliable-transmits")
    {
        unreliable_transmits.yfilter = yfilter;
    }
    if(value_path == "reliable-transmits")
    {
        reliable_transmits.yfilter = yfilter;
    }
    if(value_path == "total-srtt")
    {
        total_srtt.yfilter = yfilter;
    }
    if(value_path == "unreliable-send-interval")
    {
        unreliable_send_interval.yfilter = yfilter;
    }
    if(value_path == "reliable-send-interval")
    {
        reliable_send_interval.yfilter = yfilter;
    }
    if(value_path == "last-mc-flow-delay")
    {
        last_mc_flow_delay.yfilter = yfilter;
    }
    if(value_path == "pending-routes")
    {
        pending_routes.yfilter = yfilter;
    }
    if(value_path == "hello-interval")
    {
        hello_interval.yfilter = yfilter;
    }
    if(value_path == "holdtime")
    {
        holdtime.yfilter = yfilter;
    }
    if(value_path == "bfd-enabled")
    {
        bfd_enabled.yfilter = yfilter;
    }
    if(value_path == "bfd-interval")
    {
        bfd_interval.yfilter = yfilter;
    }
    if(value_path == "bfd-multiplier")
    {
        bfd_multiplier.yfilter = yfilter;
    }
    if(value_path == "serial-number-present")
    {
        serial_number_present.yfilter = yfilter;
    }
    if(value_path == "transmit-serial-number")
    {
        transmit_serial_number.yfilter = yfilter;
    }
    if(value_path == "packetize-pending")
    {
        packetize_pending.yfilter = yfilter;
    }
    if(value_path == "unreliable-multicast-sent")
    {
        unreliable_multicast_sent.yfilter = yfilter;
    }
    if(value_path == "reliable-multicast-sent")
    {
        reliable_multicast_sent.yfilter = yfilter;
    }
    if(value_path == "unreliable-unicast-sent")
    {
        unreliable_unicast_sent.yfilter = yfilter;
    }
    if(value_path == "reliable-unicast-sent")
    {
        reliable_unicast_sent.yfilter = yfilter;
    }
    if(value_path == "multicast-exceptions-sent")
    {
        multicast_exceptions_sent.yfilter = yfilter;
    }
    if(value_path == "cr-packets-sent")
    {
        cr_packets_sent.yfilter = yfilter;
    }
    if(value_path == "acks-suppressed")
    {
        acks_suppressed.yfilter = yfilter;
    }
    if(value_path == "retransmissions-sent")
    {
        retransmissions_sent.yfilter = yfilter;
    }
    if(value_path == "out-of-sequence-received")
    {
        out_of_sequence_received.yfilter = yfilter;
    }
    if(value_path == "stub-interface")
    {
        stub_interface.yfilter = yfilter;
    }
    if(value_path == "next-hop-self-enabled")
    {
        next_hop_self_enabled.yfilter = yfilter;
    }
    if(value_path == "split-horizon-enabled")
    {
        split_horizon_enabled.yfilter = yfilter;
    }
    if(value_path == "passive-interface")
    {
        passive_interface.yfilter = yfilter;
    }
    if(value_path == "bandwidth-percent")
    {
        bandwidth_percent.yfilter = yfilter;
    }
    if(value_path == "site-of-origin-type")
    {
        site_of_origin_type.yfilter = yfilter;
    }
    if(value_path == "site-of-origin")
    {
        site_of_origin.yfilter = yfilter;
    }
    if(value_path == "auth-mode")
    {
        auth_mode.yfilter = yfilter;
    }
    if(value_path == "auth-keychain")
    {
        auth_keychain.yfilter = yfilter;
    }
    if(value_path == "auth-key-exists")
    {
        auth_key_exists.yfilter = yfilter;
    }
    if(value_path == "auth-key-md5")
    {
        auth_key_md5.yfilter = yfilter;
    }
    if(value_path == "auth-key-id")
    {
        auth_key_id.yfilter = yfilter;
    }
    if(value_path == "total-pkt-recvd")
    {
        total_pkt_recvd.yfilter = yfilter;
    }
    if(value_path == "pkt-drop-wrong-kc")
    {
        pkt_drop_wrong_kc.yfilter = yfilter;
    }
    if(value_path == "pkt-drop-no-auth")
    {
        pkt_drop_no_auth.yfilter = yfilter;
    }
    if(value_path == "pkt-drop-invalid-auth")
    {
        pkt_drop_invalid_auth.yfilter = yfilter;
    }
    if(value_path == "pkt-accepted-valid-auth")
    {
        pkt_accepted_valid_auth.yfilter = yfilter;
    }
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
    if(value_path == "bandwidth64")
    {
        bandwidth64.yfilter = yfilter;
    }
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
    if(value_path == "delay64")
    {
        delay64.yfilter = yfilter;
    }
    if(value_path == "delay-unit")
    {
        delay_unit.yfilter = yfilter;
    }
    if(value_path == "reliability")
    {
        reliability.yfilter = yfilter;
    }
    if(value_path == "load")
    {
        load.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "configured-bandwidth")
    {
        configured_bandwidth.yfilter = yfilter;
    }
    if(value_path == "configured-bandwidth64")
    {
        configured_bandwidth64.yfilter = yfilter;
    }
    if(value_path == "configured-delay")
    {
        configured_delay.yfilter = yfilter;
    }
    if(value_path == "configured-delay64")
    {
        configured_delay64.yfilter = yfilter;
    }
    if(value_path == "configured-delay-unit")
    {
        configured_delay_unit.yfilter = yfilter;
    }
    if(value_path == "configured-reliability")
    {
        configured_reliability.yfilter = yfilter;
    }
    if(value_path == "configured-load")
    {
        configured_load.yfilter = yfilter;
    }
    if(value_path == "configured-bandwidth-flag")
    {
        configured_bandwidth_flag.yfilter = yfilter;
    }
    if(value_path == "configured-delay-flag")
    {
        configured_delay_flag.yfilter = yfilter;
    }
    if(value_path == "configured-reliability-flag")
    {
        configured_reliability_flag.yfilter = yfilter;
    }
    if(value_path == "configured-load-flag")
    {
        configured_load_flag.yfilter = yfilter;
    }
    if(value_path == "up")
    {
        up.yfilter = yfilter;
    }
    if(value_path == "type-supported")
    {
        type_supported.yfilter = yfilter;
    }
    if(value_path == "ital-record-found")
    {
        ital_record_found.yfilter = yfilter;
    }
    if(value_path == "configured")
    {
        configured.yfilter = yfilter;
    }
    if(value_path == "multicast-enabled")
    {
        multicast_enabled.yfilter = yfilter;
    }
    if(value_path == "socket-setup")
    {
        socket_setup.yfilter = yfilter;
    }
    if(value_path == "lpts-socket-setup")
    {
        lpts_socket_setup.yfilter = yfilter;
    }
    if(value_path == "primary-ipv4-address")
    {
        primary_ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-link-local-addr")
    {
        ipv6_link_local_addr.yfilter = yfilter;
    }
    if(value_path == "primary-prefix-length")
    {
        primary_prefix_length.yfilter = yfilter;
    }
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
    if(value_path == "interface-type")
    {
        interface_type.yfilter = yfilter;
    }
    if(value_path == "configured-items")
    {
        configured_items.yfilter = yfilter;
    }
    if(value_path == "is-passive-enabled")
    {
        is_passive_enabled.yfilter = yfilter;
    }
    if(value_path == "is-passive-disabled")
    {
        is_passive_disabled.yfilter = yfilter;
    }
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "static-neighbor" || name == "interface-name" || name == "afi" || name == "as-number" || name == "peer-count" || name == "classic-peer-count" || name == "wide-peer-count" || name == "unreliable-transmits" || name == "reliable-transmits" || name == "total-srtt" || name == "unreliable-send-interval" || name == "reliable-send-interval" || name == "last-mc-flow-delay" || name == "pending-routes" || name == "hello-interval" || name == "holdtime" || name == "bfd-enabled" || name == "bfd-interval" || name == "bfd-multiplier" || name == "serial-number-present" || name == "transmit-serial-number" || name == "packetize-pending" || name == "unreliable-multicast-sent" || name == "reliable-multicast-sent" || name == "unreliable-unicast-sent" || name == "reliable-unicast-sent" || name == "multicast-exceptions-sent" || name == "cr-packets-sent" || name == "acks-suppressed" || name == "retransmissions-sent" || name == "out-of-sequence-received" || name == "stub-interface" || name == "next-hop-self-enabled" || name == "split-horizon-enabled" || name == "passive-interface" || name == "bandwidth-percent" || name == "site-of-origin-type" || name == "site-of-origin" || name == "auth-mode" || name == "auth-keychain" || name == "auth-key-exists" || name == "auth-key-md5" || name == "auth-key-id" || name == "total-pkt-recvd" || name == "pkt-drop-wrong-kc" || name == "pkt-drop-no-auth" || name == "pkt-drop-invalid-auth" || name == "pkt-accepted-valid-auth" || name == "bandwidth" || name == "bandwidth64" || name == "delay" || name == "delay64" || name == "delay-unit" || name == "reliability" || name == "load" || name == "mtu" || name == "configured-bandwidth" || name == "configured-bandwidth64" || name == "configured-delay" || name == "configured-delay64" || name == "configured-delay-unit" || name == "configured-reliability" || name == "configured-load" || name == "configured-bandwidth-flag" || name == "configured-delay-flag" || name == "configured-reliability-flag" || name == "configured-load-flag" || name == "up" || name == "type-supported" || name == "ital-record-found" || name == "configured" || name == "multicast-enabled" || name == "socket-setup" || name == "lpts-socket-setup" || name == "primary-ipv4-address" || name == "ipv6-link-local-addr" || name == "primary-prefix-length" || name == "interface-handle" || name == "interface-type" || name == "configured-items" || name == "is-passive-enabled" || name == "is-passive-disabled")
        return true;
    return false;
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::Interfaces::Interface::StaticNeighbor::StaticNeighbor()
    :
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "static-neighbor"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::Interfaces::Interface::StaticNeighbor::~StaticNeighbor()
{
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::Interfaces::Interface::StaticNeighbor::has_data() const
{
    if (is_presence_container) return true;
    return ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::Interfaces::Interface::StaticNeighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::Interfaces::Interface::StaticNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-neighbor";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::Interfaces::Interface::StaticNeighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::Interfaces::Interface::StaticNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::Interfaces::Interface::StaticNeighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::Interfaces::Interface::StaticNeighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::Interfaces::Interface::StaticNeighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::Interfaces::Interface::StaticNeighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpEvents::EigrpEvents()
    :
    afi{YType::uint32, "afi"},
    as_number{YType::uint32, "as-number"},
    current_event_index{YType::uint32, "current-event-index"},
    eigrp_start_absolute_seconds{YType::uint32, "eigrp-start-absolute-seconds"},
    eigrp_start_absolute_nanoseconds{YType::uint32, "eigrp-start-absolute-nanoseconds"},
    eigrp_start_relative_seconds{YType::uint32, "eigrp-start-relative-seconds"},
    eigrp_start_relative_nanoseconds{YType::uint32, "eigrp-start-relative-nanoseconds"}
{

    yang_name = "eigrp-events"; yang_parent_name = "as"; is_top_level_class = false; has_list_ancestor = true; 
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpEvents::~EigrpEvents()
{
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpEvents::has_data() const
{
    if (is_presence_container) return true;
    return afi.is_set
	|| as_number.is_set
	|| current_event_index.is_set
	|| eigrp_start_absolute_seconds.is_set
	|| eigrp_start_absolute_nanoseconds.is_set
	|| eigrp_start_relative_seconds.is_set
	|| eigrp_start_relative_nanoseconds.is_set;
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpEvents::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(as_number.yfilter)
	|| ydk::is_set(current_event_index.yfilter)
	|| ydk::is_set(eigrp_start_absolute_seconds.yfilter)
	|| ydk::is_set(eigrp_start_absolute_nanoseconds.yfilter)
	|| ydk::is_set(eigrp_start_relative_seconds.yfilter)
	|| ydk::is_set(eigrp_start_relative_nanoseconds.yfilter);
}

std::string Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpEvents::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp-events";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpEvents::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());
    if (current_event_index.is_set || is_set(current_event_index.yfilter)) leaf_name_data.push_back(current_event_index.get_name_leafdata());
    if (eigrp_start_absolute_seconds.is_set || is_set(eigrp_start_absolute_seconds.yfilter)) leaf_name_data.push_back(eigrp_start_absolute_seconds.get_name_leafdata());
    if (eigrp_start_absolute_nanoseconds.is_set || is_set(eigrp_start_absolute_nanoseconds.yfilter)) leaf_name_data.push_back(eigrp_start_absolute_nanoseconds.get_name_leafdata());
    if (eigrp_start_relative_seconds.is_set || is_set(eigrp_start_relative_seconds.yfilter)) leaf_name_data.push_back(eigrp_start_relative_seconds.get_name_leafdata());
    if (eigrp_start_relative_nanoseconds.is_set || is_set(eigrp_start_relative_nanoseconds.yfilter)) leaf_name_data.push_back(eigrp_start_relative_nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpEvents::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpEvents::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpEvents::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-event-index")
    {
        current_event_index = value;
        current_event_index.value_namespace = name_space;
        current_event_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eigrp-start-absolute-seconds")
    {
        eigrp_start_absolute_seconds = value;
        eigrp_start_absolute_seconds.value_namespace = name_space;
        eigrp_start_absolute_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eigrp-start-absolute-nanoseconds")
    {
        eigrp_start_absolute_nanoseconds = value;
        eigrp_start_absolute_nanoseconds.value_namespace = name_space;
        eigrp_start_absolute_nanoseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eigrp-start-relative-seconds")
    {
        eigrp_start_relative_seconds = value;
        eigrp_start_relative_seconds.value_namespace = name_space;
        eigrp_start_relative_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eigrp-start-relative-nanoseconds")
    {
        eigrp_start_relative_nanoseconds = value;
        eigrp_start_relative_nanoseconds.value_namespace = name_space;
        eigrp_start_relative_nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpEvents::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
    if(value_path == "current-event-index")
    {
        current_event_index.yfilter = yfilter;
    }
    if(value_path == "eigrp-start-absolute-seconds")
    {
        eigrp_start_absolute_seconds.yfilter = yfilter;
    }
    if(value_path == "eigrp-start-absolute-nanoseconds")
    {
        eigrp_start_absolute_nanoseconds.yfilter = yfilter;
    }
    if(value_path == "eigrp-start-relative-seconds")
    {
        eigrp_start_relative_seconds.yfilter = yfilter;
    }
    if(value_path == "eigrp-start-relative-nanoseconds")
    {
        eigrp_start_relative_nanoseconds.yfilter = yfilter;
    }
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpEvents::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi" || name == "as-number" || name == "current-event-index" || name == "eigrp-start-absolute-seconds" || name == "eigrp-start-absolute-nanoseconds" || name == "eigrp-start-relative-seconds" || name == "eigrp-start-relative-nanoseconds")
        return true;
    return false;
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::Neighbors::Neighbors()
    :
    neighbor(this, {"neighbor_address"})
{

    yang_name = "neighbors"; yang_parent_name = "as"; is_top_level_class = false; has_list_ancestor = true; 
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::Neighbors::~Neighbors()
{
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::Neighbors::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<neighbor.len(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::Neighbors::has_operation() const
{
    for (std::size_t index=0; index<neighbor.len(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::Neighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::Neighbors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::Neighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor")
    {
        auto ent_ = std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::Neighbors::Neighbor>();
        ent_->parent = this;
        neighbor.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::Neighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : neighbor.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::Neighbors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::Neighbors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::Neighbors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor")
        return true;
    return false;
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::Neighbors::Neighbor::Neighbor()
    :
    neighbor_address{YType::str, "neighbor-address"},
    afi{YType::uint32, "afi"},
    as_number{YType::uint32, "as-number"},
    peer_suspended{YType::boolean, "peer-suspended"},
    peer_handle{YType::uint32, "peer-handle"},
    interface_list{YType::str, "interface-list"},
    holdtime{YType::uint32, "holdtime"},
    uptime{YType::uint32, "uptime"},
    srtt{YType::uint32, "srtt"},
    rto{YType::uint32, "rto"},
    bfd_enabled{YType::boolean, "bfd-enabled"},
    queue_count{YType::uint32, "queue-count"},
    last_sequence_number{YType::uint32, "last-sequence-number"},
    static_neighbor{YType::boolean, "static-neighbor"},
    remote_neighbor{YType::boolean, "remote-neighbor"},
    hop_count{YType::uint8, "hop-count"},
    restart_configured{YType::boolean, "restart-configured"},
    restart_time{YType::uint32, "restart-time"},
    last_startup_serial_number{YType::uint64, "last-startup-serial-number"},
    ios_major_version{YType::uint8, "ios-major-version"},
    ios_minor_version{YType::uint8, "ios-minor-version"},
    eigrp_major_version{YType::uint8, "eigrp-major-version"},
    eigrp_minor_version{YType::uint8, "eigrp-minor-version"},
    retransmission_count{YType::uint32, "retransmission-count"},
    retry_count{YType::uint32, "retry-count"},
    need_init{YType::boolean, "need-init"},
    need_init_ack{YType::boolean, "need-init-ack"},
    reinitialization_needed{YType::boolean, "reinitialization-needed"},
    reinit_start{YType::uint32, "reinit-start"},
    peer_prefix_count{YType::uint32, "peer-prefix-count"},
    stubbed{YType::boolean, "stubbed"},
    allow_connected{YType::boolean, "allow-connected"},
    allow_static{YType::boolean, "allow-static"},
    allow_summaries{YType::boolean, "allow-summaries"},
    allow_redistributed{YType::boolean, "allow-redistributed"},
    test_handle{YType::boolean, "test-handle"},
    stubbed_interface{YType::boolean, "stubbed-interface"},
    suspended_reset{YType::boolean, "suspended-reset"},
    suspended_time_left{YType::uint32, "suspended-time-left"}
        ,
    source(std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::Neighbors::Neighbor::Source>())
    , neighbor_queue(this, {})
{
    source->parent = this;

    yang_name = "neighbor"; yang_parent_name = "neighbors"; is_top_level_class = false; has_list_ancestor = true; 
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::Neighbors::Neighbor::~Neighbor()
{
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::Neighbors::Neighbor::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<neighbor_queue.len(); index++)
    {
        if(neighbor_queue[index]->has_data())
            return true;
    }
    return neighbor_address.is_set
	|| afi.is_set
	|| as_number.is_set
	|| peer_suspended.is_set
	|| peer_handle.is_set
	|| interface_list.is_set
	|| holdtime.is_set
	|| uptime.is_set
	|| srtt.is_set
	|| rto.is_set
	|| bfd_enabled.is_set
	|| queue_count.is_set
	|| last_sequence_number.is_set
	|| static_neighbor.is_set
	|| remote_neighbor.is_set
	|| hop_count.is_set
	|| restart_configured.is_set
	|| restart_time.is_set
	|| last_startup_serial_number.is_set
	|| ios_major_version.is_set
	|| ios_minor_version.is_set
	|| eigrp_major_version.is_set
	|| eigrp_minor_version.is_set
	|| retransmission_count.is_set
	|| retry_count.is_set
	|| need_init.is_set
	|| need_init_ack.is_set
	|| reinitialization_needed.is_set
	|| reinit_start.is_set
	|| peer_prefix_count.is_set
	|| stubbed.is_set
	|| allow_connected.is_set
	|| allow_static.is_set
	|| allow_summaries.is_set
	|| allow_redistributed.is_set
	|| test_handle.is_set
	|| stubbed_interface.is_set
	|| suspended_reset.is_set
	|| suspended_time_left.is_set
	|| (source !=  nullptr && source->has_data());
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::Neighbors::Neighbor::has_operation() const
{
    for (std::size_t index=0; index<neighbor_queue.len(); index++)
    {
        if(neighbor_queue[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(as_number.yfilter)
	|| ydk::is_set(peer_suspended.yfilter)
	|| ydk::is_set(peer_handle.yfilter)
	|| ydk::is_set(interface_list.yfilter)
	|| ydk::is_set(holdtime.yfilter)
	|| ydk::is_set(uptime.yfilter)
	|| ydk::is_set(srtt.yfilter)
	|| ydk::is_set(rto.yfilter)
	|| ydk::is_set(bfd_enabled.yfilter)
	|| ydk::is_set(queue_count.yfilter)
	|| ydk::is_set(last_sequence_number.yfilter)
	|| ydk::is_set(static_neighbor.yfilter)
	|| ydk::is_set(remote_neighbor.yfilter)
	|| ydk::is_set(hop_count.yfilter)
	|| ydk::is_set(restart_configured.yfilter)
	|| ydk::is_set(restart_time.yfilter)
	|| ydk::is_set(last_startup_serial_number.yfilter)
	|| ydk::is_set(ios_major_version.yfilter)
	|| ydk::is_set(ios_minor_version.yfilter)
	|| ydk::is_set(eigrp_major_version.yfilter)
	|| ydk::is_set(eigrp_minor_version.yfilter)
	|| ydk::is_set(retransmission_count.yfilter)
	|| ydk::is_set(retry_count.yfilter)
	|| ydk::is_set(need_init.yfilter)
	|| ydk::is_set(need_init_ack.yfilter)
	|| ydk::is_set(reinitialization_needed.yfilter)
	|| ydk::is_set(reinit_start.yfilter)
	|| ydk::is_set(peer_prefix_count.yfilter)
	|| ydk::is_set(stubbed.yfilter)
	|| ydk::is_set(allow_connected.yfilter)
	|| ydk::is_set(allow_static.yfilter)
	|| ydk::is_set(allow_summaries.yfilter)
	|| ydk::is_set(allow_redistributed.yfilter)
	|| ydk::is_set(test_handle.yfilter)
	|| ydk::is_set(stubbed_interface.yfilter)
	|| ydk::is_set(suspended_reset.yfilter)
	|| ydk::is_set(suspended_time_left.yfilter)
	|| (source !=  nullptr && source->has_operation());
}

std::string Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::Neighbors::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";
    ADD_KEY_TOKEN(neighbor_address, "neighbor-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::Neighbors::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());
    if (peer_suspended.is_set || is_set(peer_suspended.yfilter)) leaf_name_data.push_back(peer_suspended.get_name_leafdata());
    if (peer_handle.is_set || is_set(peer_handle.yfilter)) leaf_name_data.push_back(peer_handle.get_name_leafdata());
    if (interface_list.is_set || is_set(interface_list.yfilter)) leaf_name_data.push_back(interface_list.get_name_leafdata());
    if (holdtime.is_set || is_set(holdtime.yfilter)) leaf_name_data.push_back(holdtime.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());
    if (srtt.is_set || is_set(srtt.yfilter)) leaf_name_data.push_back(srtt.get_name_leafdata());
    if (rto.is_set || is_set(rto.yfilter)) leaf_name_data.push_back(rto.get_name_leafdata());
    if (bfd_enabled.is_set || is_set(bfd_enabled.yfilter)) leaf_name_data.push_back(bfd_enabled.get_name_leafdata());
    if (queue_count.is_set || is_set(queue_count.yfilter)) leaf_name_data.push_back(queue_count.get_name_leafdata());
    if (last_sequence_number.is_set || is_set(last_sequence_number.yfilter)) leaf_name_data.push_back(last_sequence_number.get_name_leafdata());
    if (static_neighbor.is_set || is_set(static_neighbor.yfilter)) leaf_name_data.push_back(static_neighbor.get_name_leafdata());
    if (remote_neighbor.is_set || is_set(remote_neighbor.yfilter)) leaf_name_data.push_back(remote_neighbor.get_name_leafdata());
    if (hop_count.is_set || is_set(hop_count.yfilter)) leaf_name_data.push_back(hop_count.get_name_leafdata());
    if (restart_configured.is_set || is_set(restart_configured.yfilter)) leaf_name_data.push_back(restart_configured.get_name_leafdata());
    if (restart_time.is_set || is_set(restart_time.yfilter)) leaf_name_data.push_back(restart_time.get_name_leafdata());
    if (last_startup_serial_number.is_set || is_set(last_startup_serial_number.yfilter)) leaf_name_data.push_back(last_startup_serial_number.get_name_leafdata());
    if (ios_major_version.is_set || is_set(ios_major_version.yfilter)) leaf_name_data.push_back(ios_major_version.get_name_leafdata());
    if (ios_minor_version.is_set || is_set(ios_minor_version.yfilter)) leaf_name_data.push_back(ios_minor_version.get_name_leafdata());
    if (eigrp_major_version.is_set || is_set(eigrp_major_version.yfilter)) leaf_name_data.push_back(eigrp_major_version.get_name_leafdata());
    if (eigrp_minor_version.is_set || is_set(eigrp_minor_version.yfilter)) leaf_name_data.push_back(eigrp_minor_version.get_name_leafdata());
    if (retransmission_count.is_set || is_set(retransmission_count.yfilter)) leaf_name_data.push_back(retransmission_count.get_name_leafdata());
    if (retry_count.is_set || is_set(retry_count.yfilter)) leaf_name_data.push_back(retry_count.get_name_leafdata());
    if (need_init.is_set || is_set(need_init.yfilter)) leaf_name_data.push_back(need_init.get_name_leafdata());
    if (need_init_ack.is_set || is_set(need_init_ack.yfilter)) leaf_name_data.push_back(need_init_ack.get_name_leafdata());
    if (reinitialization_needed.is_set || is_set(reinitialization_needed.yfilter)) leaf_name_data.push_back(reinitialization_needed.get_name_leafdata());
    if (reinit_start.is_set || is_set(reinit_start.yfilter)) leaf_name_data.push_back(reinit_start.get_name_leafdata());
    if (peer_prefix_count.is_set || is_set(peer_prefix_count.yfilter)) leaf_name_data.push_back(peer_prefix_count.get_name_leafdata());
    if (stubbed.is_set || is_set(stubbed.yfilter)) leaf_name_data.push_back(stubbed.get_name_leafdata());
    if (allow_connected.is_set || is_set(allow_connected.yfilter)) leaf_name_data.push_back(allow_connected.get_name_leafdata());
    if (allow_static.is_set || is_set(allow_static.yfilter)) leaf_name_data.push_back(allow_static.get_name_leafdata());
    if (allow_summaries.is_set || is_set(allow_summaries.yfilter)) leaf_name_data.push_back(allow_summaries.get_name_leafdata());
    if (allow_redistributed.is_set || is_set(allow_redistributed.yfilter)) leaf_name_data.push_back(allow_redistributed.get_name_leafdata());
    if (test_handle.is_set || is_set(test_handle.yfilter)) leaf_name_data.push_back(test_handle.get_name_leafdata());
    if (stubbed_interface.is_set || is_set(stubbed_interface.yfilter)) leaf_name_data.push_back(stubbed_interface.get_name_leafdata());
    if (suspended_reset.is_set || is_set(suspended_reset.yfilter)) leaf_name_data.push_back(suspended_reset.get_name_leafdata());
    if (suspended_time_left.is_set || is_set(suspended_time_left.yfilter)) leaf_name_data.push_back(suspended_time_left.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::Neighbors::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::Neighbors::Neighbor::Source>();
        }
        return source;
    }

    if(child_yang_name == "neighbor-queue")
    {
        auto ent_ = std::make_shared<Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::Neighbors::Neighbor::NeighborQueue>();
        ent_->parent = this;
        neighbor_queue.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::Neighbors::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(source != nullptr)
    {
        _children["source"] = source;
    }

    count_ = 0;
    for (auto ent_ : neighbor_queue.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::Neighbors::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-suspended")
    {
        peer_suspended = value;
        peer_suspended.value_namespace = name_space;
        peer_suspended.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-handle")
    {
        peer_handle = value;
        peer_handle.value_namespace = name_space;
        peer_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-list")
    {
        interface_list = value;
        interface_list.value_namespace = name_space;
        interface_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "holdtime")
    {
        holdtime = value;
        holdtime.value_namespace = name_space;
        holdtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uptime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srtt")
    {
        srtt = value;
        srtt.value_namespace = name_space;
        srtt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rto")
    {
        rto = value;
        rto.value_namespace = name_space;
        rto.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-enabled")
    {
        bfd_enabled = value;
        bfd_enabled.value_namespace = name_space;
        bfd_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "queue-count")
    {
        queue_count = value;
        queue_count.value_namespace = name_space;
        queue_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-sequence-number")
    {
        last_sequence_number = value;
        last_sequence_number.value_namespace = name_space;
        last_sequence_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "static-neighbor")
    {
        static_neighbor = value;
        static_neighbor.value_namespace = name_space;
        static_neighbor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-neighbor")
    {
        remote_neighbor = value;
        remote_neighbor.value_namespace = name_space;
        remote_neighbor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hop-count")
    {
        hop_count = value;
        hop_count.value_namespace = name_space;
        hop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-configured")
    {
        restart_configured = value;
        restart_configured.value_namespace = name_space;
        restart_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-time")
    {
        restart_time = value;
        restart_time.value_namespace = name_space;
        restart_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-startup-serial-number")
    {
        last_startup_serial_number = value;
        last_startup_serial_number.value_namespace = name_space;
        last_startup_serial_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ios-major-version")
    {
        ios_major_version = value;
        ios_major_version.value_namespace = name_space;
        ios_major_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ios-minor-version")
    {
        ios_minor_version = value;
        ios_minor_version.value_namespace = name_space;
        ios_minor_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eigrp-major-version")
    {
        eigrp_major_version = value;
        eigrp_major_version.value_namespace = name_space;
        eigrp_major_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eigrp-minor-version")
    {
        eigrp_minor_version = value;
        eigrp_minor_version.value_namespace = name_space;
        eigrp_minor_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmission-count")
    {
        retransmission_count = value;
        retransmission_count.value_namespace = name_space;
        retransmission_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retry-count")
    {
        retry_count = value;
        retry_count.value_namespace = name_space;
        retry_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "need-init")
    {
        need_init = value;
        need_init.value_namespace = name_space;
        need_init.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "need-init-ack")
    {
        need_init_ack = value;
        need_init_ack.value_namespace = name_space;
        need_init_ack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reinitialization-needed")
    {
        reinitialization_needed = value;
        reinitialization_needed.value_namespace = name_space;
        reinitialization_needed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reinit-start")
    {
        reinit_start = value;
        reinit_start.value_namespace = name_space;
        reinit_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-prefix-count")
    {
        peer_prefix_count = value;
        peer_prefix_count.value_namespace = name_space;
        peer_prefix_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stubbed")
    {
        stubbed = value;
        stubbed.value_namespace = name_space;
        stubbed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allow-connected")
    {
        allow_connected = value;
        allow_connected.value_namespace = name_space;
        allow_connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allow-static")
    {
        allow_static = value;
        allow_static.value_namespace = name_space;
        allow_static.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allow-summaries")
    {
        allow_summaries = value;
        allow_summaries.value_namespace = name_space;
        allow_summaries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allow-redistributed")
    {
        allow_redistributed = value;
        allow_redistributed.value_namespace = name_space;
        allow_redistributed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "test-handle")
    {
        test_handle = value;
        test_handle.value_namespace = name_space;
        test_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stubbed-interface")
    {
        stubbed_interface = value;
        stubbed_interface.value_namespace = name_space;
        stubbed_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suspended-reset")
    {
        suspended_reset = value;
        suspended_reset.value_namespace = name_space;
        suspended_reset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suspended-time-left")
    {
        suspended_time_left = value;
        suspended_time_left.value_namespace = name_space;
        suspended_time_left.value_namespace_prefix = name_space_prefix;
    }
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::Neighbors::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
    if(value_path == "peer-suspended")
    {
        peer_suspended.yfilter = yfilter;
    }
    if(value_path == "peer-handle")
    {
        peer_handle.yfilter = yfilter;
    }
    if(value_path == "interface-list")
    {
        interface_list.yfilter = yfilter;
    }
    if(value_path == "holdtime")
    {
        holdtime.yfilter = yfilter;
    }
    if(value_path == "uptime")
    {
        uptime.yfilter = yfilter;
    }
    if(value_path == "srtt")
    {
        srtt.yfilter = yfilter;
    }
    if(value_path == "rto")
    {
        rto.yfilter = yfilter;
    }
    if(value_path == "bfd-enabled")
    {
        bfd_enabled.yfilter = yfilter;
    }
    if(value_path == "queue-count")
    {
        queue_count.yfilter = yfilter;
    }
    if(value_path == "last-sequence-number")
    {
        last_sequence_number.yfilter = yfilter;
    }
    if(value_path == "static-neighbor")
    {
        static_neighbor.yfilter = yfilter;
    }
    if(value_path == "remote-neighbor")
    {
        remote_neighbor.yfilter = yfilter;
    }
    if(value_path == "hop-count")
    {
        hop_count.yfilter = yfilter;
    }
    if(value_path == "restart-configured")
    {
        restart_configured.yfilter = yfilter;
    }
    if(value_path == "restart-time")
    {
        restart_time.yfilter = yfilter;
    }
    if(value_path == "last-startup-serial-number")
    {
        last_startup_serial_number.yfilter = yfilter;
    }
    if(value_path == "ios-major-version")
    {
        ios_major_version.yfilter = yfilter;
    }
    if(value_path == "ios-minor-version")
    {
        ios_minor_version.yfilter = yfilter;
    }
    if(value_path == "eigrp-major-version")
    {
        eigrp_major_version.yfilter = yfilter;
    }
    if(value_path == "eigrp-minor-version")
    {
        eigrp_minor_version.yfilter = yfilter;
    }
    if(value_path == "retransmission-count")
    {
        retransmission_count.yfilter = yfilter;
    }
    if(value_path == "retry-count")
    {
        retry_count.yfilter = yfilter;
    }
    if(value_path == "need-init")
    {
        need_init.yfilter = yfilter;
    }
    if(value_path == "need-init-ack")
    {
        need_init_ack.yfilter = yfilter;
    }
    if(value_path == "reinitialization-needed")
    {
        reinitialization_needed.yfilter = yfilter;
    }
    if(value_path == "reinit-start")
    {
        reinit_start.yfilter = yfilter;
    }
    if(value_path == "peer-prefix-count")
    {
        peer_prefix_count.yfilter = yfilter;
    }
    if(value_path == "stubbed")
    {
        stubbed.yfilter = yfilter;
    }
    if(value_path == "allow-connected")
    {
        allow_connected.yfilter = yfilter;
    }
    if(value_path == "allow-static")
    {
        allow_static.yfilter = yfilter;
    }
    if(value_path == "allow-summaries")
    {
        allow_summaries.yfilter = yfilter;
    }
    if(value_path == "allow-redistributed")
    {
        allow_redistributed.yfilter = yfilter;
    }
    if(value_path == "test-handle")
    {
        test_handle.yfilter = yfilter;
    }
    if(value_path == "stubbed-interface")
    {
        stubbed_interface.yfilter = yfilter;
    }
    if(value_path == "suspended-reset")
    {
        suspended_reset.yfilter = yfilter;
    }
    if(value_path == "suspended-time-left")
    {
        suspended_time_left.yfilter = yfilter;
    }
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::Neighbors::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source" || name == "neighbor-queue" || name == "neighbor-address" || name == "afi" || name == "as-number" || name == "peer-suspended" || name == "peer-handle" || name == "interface-list" || name == "holdtime" || name == "uptime" || name == "srtt" || name == "rto" || name == "bfd-enabled" || name == "queue-count" || name == "last-sequence-number" || name == "static-neighbor" || name == "remote-neighbor" || name == "hop-count" || name == "restart-configured" || name == "restart-time" || name == "last-startup-serial-number" || name == "ios-major-version" || name == "ios-minor-version" || name == "eigrp-major-version" || name == "eigrp-minor-version" || name == "retransmission-count" || name == "retry-count" || name == "need-init" || name == "need-init-ack" || name == "reinitialization-needed" || name == "reinit-start" || name == "peer-prefix-count" || name == "stubbed" || name == "allow-connected" || name == "allow-static" || name == "allow-summaries" || name == "allow-redistributed" || name == "test-handle" || name == "stubbed-interface" || name == "suspended-reset" || name == "suspended-time-left")
        return true;
    return false;
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::Neighbors::Neighbor::Source::Source()
    :
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "source"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::Neighbors::Neighbor::Source::~Source()
{
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::Neighbors::Neighbor::Source::has_data() const
{
    if (is_presence_container) return true;
    return ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::Neighbors::Neighbor::Source::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::Neighbors::Neighbor::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::Neighbors::Neighbor::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::Neighbors::Neighbor::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::Neighbors::Neighbor::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::Neighbors::Neighbor::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::Neighbors::Neighbor::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::Neighbors::Neighbor::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::Neighbors::Neighbor::NeighborQueue::NeighborQueue()
    :
    operation_code{YType::uint32, "operation-code"},
    ack_sequnce_number{YType::uint32, "ack-sequnce-number"},
    start_serial_number{YType::uint64, "start-serial-number"},
    end_serial_number{YType::uint64, "end-serial-number"},
    pregenerated{YType::boolean, "pregenerated"},
    packet_length{YType::uint32, "packet-length"},
    time_sent_flag{YType::boolean, "time-sent-flag"},
    time_sent{YType::uint32, "time-sent"},
    init_bit_set{YType::boolean, "init-bit-set"},
    sequenced{YType::boolean, "sequenced"}
{

    yang_name = "neighbor-queue"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::Neighbors::Neighbor::NeighborQueue::~NeighborQueue()
{
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::Neighbors::Neighbor::NeighborQueue::has_data() const
{
    if (is_presence_container) return true;
    return operation_code.is_set
	|| ack_sequnce_number.is_set
	|| start_serial_number.is_set
	|| end_serial_number.is_set
	|| pregenerated.is_set
	|| packet_length.is_set
	|| time_sent_flag.is_set
	|| time_sent.is_set
	|| init_bit_set.is_set
	|| sequenced.is_set;
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::Neighbors::Neighbor::NeighborQueue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operation_code.yfilter)
	|| ydk::is_set(ack_sequnce_number.yfilter)
	|| ydk::is_set(start_serial_number.yfilter)
	|| ydk::is_set(end_serial_number.yfilter)
	|| ydk::is_set(pregenerated.yfilter)
	|| ydk::is_set(packet_length.yfilter)
	|| ydk::is_set(time_sent_flag.yfilter)
	|| ydk::is_set(time_sent.yfilter)
	|| ydk::is_set(init_bit_set.yfilter)
	|| ydk::is_set(sequenced.yfilter);
}

std::string Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::Neighbors::Neighbor::NeighborQueue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-queue";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::Neighbors::Neighbor::NeighborQueue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (operation_code.is_set || is_set(operation_code.yfilter)) leaf_name_data.push_back(operation_code.get_name_leafdata());
    if (ack_sequnce_number.is_set || is_set(ack_sequnce_number.yfilter)) leaf_name_data.push_back(ack_sequnce_number.get_name_leafdata());
    if (start_serial_number.is_set || is_set(start_serial_number.yfilter)) leaf_name_data.push_back(start_serial_number.get_name_leafdata());
    if (end_serial_number.is_set || is_set(end_serial_number.yfilter)) leaf_name_data.push_back(end_serial_number.get_name_leafdata());
    if (pregenerated.is_set || is_set(pregenerated.yfilter)) leaf_name_data.push_back(pregenerated.get_name_leafdata());
    if (packet_length.is_set || is_set(packet_length.yfilter)) leaf_name_data.push_back(packet_length.get_name_leafdata());
    if (time_sent_flag.is_set || is_set(time_sent_flag.yfilter)) leaf_name_data.push_back(time_sent_flag.get_name_leafdata());
    if (time_sent.is_set || is_set(time_sent.yfilter)) leaf_name_data.push_back(time_sent.get_name_leafdata());
    if (init_bit_set.is_set || is_set(init_bit_set.yfilter)) leaf_name_data.push_back(init_bit_set.get_name_leafdata());
    if (sequenced.is_set || is_set(sequenced.yfilter)) leaf_name_data.push_back(sequenced.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::Neighbors::Neighbor::NeighborQueue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::Neighbors::Neighbor::NeighborQueue::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::Neighbors::Neighbor::NeighborQueue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operation-code")
    {
        operation_code = value;
        operation_code.value_namespace = name_space;
        operation_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ack-sequnce-number")
    {
        ack_sequnce_number = value;
        ack_sequnce_number.value_namespace = name_space;
        ack_sequnce_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-serial-number")
    {
        start_serial_number = value;
        start_serial_number.value_namespace = name_space;
        start_serial_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-serial-number")
    {
        end_serial_number = value;
        end_serial_number.value_namespace = name_space;
        end_serial_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pregenerated")
    {
        pregenerated = value;
        pregenerated.value_namespace = name_space;
        pregenerated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-length")
    {
        packet_length = value;
        packet_length.value_namespace = name_space;
        packet_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-sent-flag")
    {
        time_sent_flag = value;
        time_sent_flag.value_namespace = name_space;
        time_sent_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-sent")
    {
        time_sent = value;
        time_sent.value_namespace = name_space;
        time_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "init-bit-set")
    {
        init_bit_set = value;
        init_bit_set.value_namespace = name_space;
        init_bit_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequenced")
    {
        sequenced = value;
        sequenced.value_namespace = name_space;
        sequenced.value_namespace_prefix = name_space_prefix;
    }
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::Neighbors::Neighbor::NeighborQueue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operation-code")
    {
        operation_code.yfilter = yfilter;
    }
    if(value_path == "ack-sequnce-number")
    {
        ack_sequnce_number.yfilter = yfilter;
    }
    if(value_path == "start-serial-number")
    {
        start_serial_number.yfilter = yfilter;
    }
    if(value_path == "end-serial-number")
    {
        end_serial_number.yfilter = yfilter;
    }
    if(value_path == "pregenerated")
    {
        pregenerated.yfilter = yfilter;
    }
    if(value_path == "packet-length")
    {
        packet_length.yfilter = yfilter;
    }
    if(value_path == "time-sent-flag")
    {
        time_sent_flag.yfilter = yfilter;
    }
    if(value_path == "time-sent")
    {
        time_sent.yfilter = yfilter;
    }
    if(value_path == "init-bit-set")
    {
        init_bit_set.yfilter = yfilter;
    }
    if(value_path == "sequenced")
    {
        sequenced.yfilter = yfilter;
    }
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::Neighbors::Neighbor::NeighborQueue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operation-code" || name == "ack-sequnce-number" || name == "start-serial-number" || name == "end-serial-number" || name == "pregenerated" || name == "packet-length" || name == "time-sent-flag" || name == "time-sent" || name == "init-bit-set" || name == "sequenced")
        return true;
    return false;
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpStatistics::EigrpStatistics()
    :
    afi{YType::uint32, "afi"},
    as_number{YType::uint32, "as-number"},
    configured_interface_count{YType::uint32, "configured-interface-count"},
    active_interfaces_count{YType::uint32, "active-interfaces-count"},
    activate_count{YType::uint64, "activate-count"},
    activate_error{YType::uint64, "activate-error"},
    activate_last_error{YType::int32, "activate-last-error"},
    deactivate_count{YType::uint64, "deactivate-count"},
    deactivate_error{YType::uint64, "deactivate-error"},
    deactivate_last_error{YType::int32, "deactivate-last-error"},
    socket_set{YType::uint64, "socket-set"},
    socket_set_error{YType::uint64, "socket-set-error"},
    sock_set_last_error{YType::int32, "sock-set-last-error"},
    raw_packet_in{YType::uint64, "raw-packet-in"},
    raw_packet_in_error{YType::uint64, "raw-packet-in-error"},
    raw_packet_in_last_error{YType::int32, "raw-packet-in-last-error"},
    raw_packet_out{YType::uint64, "raw-packet-out"},
    raw_packet_out_error{YType::uint64, "raw-packet-out-error"},
    raw_packet_out_last_error{YType::int32, "raw-packet-out-last-error"}
{

    yang_name = "eigrp-statistics"; yang_parent_name = "as"; is_top_level_class = false; has_list_ancestor = true; 
}

Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpStatistics::~EigrpStatistics()
{
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpStatistics::has_data() const
{
    if (is_presence_container) return true;
    return afi.is_set
	|| as_number.is_set
	|| configured_interface_count.is_set
	|| active_interfaces_count.is_set
	|| activate_count.is_set
	|| activate_error.is_set
	|| activate_last_error.is_set
	|| deactivate_count.is_set
	|| deactivate_error.is_set
	|| deactivate_last_error.is_set
	|| socket_set.is_set
	|| socket_set_error.is_set
	|| sock_set_last_error.is_set
	|| raw_packet_in.is_set
	|| raw_packet_in_error.is_set
	|| raw_packet_in_last_error.is_set
	|| raw_packet_out.is_set
	|| raw_packet_out_error.is_set
	|| raw_packet_out_last_error.is_set;
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(as_number.yfilter)
	|| ydk::is_set(configured_interface_count.yfilter)
	|| ydk::is_set(active_interfaces_count.yfilter)
	|| ydk::is_set(activate_count.yfilter)
	|| ydk::is_set(activate_error.yfilter)
	|| ydk::is_set(activate_last_error.yfilter)
	|| ydk::is_set(deactivate_count.yfilter)
	|| ydk::is_set(deactivate_error.yfilter)
	|| ydk::is_set(deactivate_last_error.yfilter)
	|| ydk::is_set(socket_set.yfilter)
	|| ydk::is_set(socket_set_error.yfilter)
	|| ydk::is_set(sock_set_last_error.yfilter)
	|| ydk::is_set(raw_packet_in.yfilter)
	|| ydk::is_set(raw_packet_in_error.yfilter)
	|| ydk::is_set(raw_packet_in_last_error.yfilter)
	|| ydk::is_set(raw_packet_out.yfilter)
	|| ydk::is_set(raw_packet_out_error.yfilter)
	|| ydk::is_set(raw_packet_out_last_error.yfilter);
}

std::string Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());
    if (configured_interface_count.is_set || is_set(configured_interface_count.yfilter)) leaf_name_data.push_back(configured_interface_count.get_name_leafdata());
    if (active_interfaces_count.is_set || is_set(active_interfaces_count.yfilter)) leaf_name_data.push_back(active_interfaces_count.get_name_leafdata());
    if (activate_count.is_set || is_set(activate_count.yfilter)) leaf_name_data.push_back(activate_count.get_name_leafdata());
    if (activate_error.is_set || is_set(activate_error.yfilter)) leaf_name_data.push_back(activate_error.get_name_leafdata());
    if (activate_last_error.is_set || is_set(activate_last_error.yfilter)) leaf_name_data.push_back(activate_last_error.get_name_leafdata());
    if (deactivate_count.is_set || is_set(deactivate_count.yfilter)) leaf_name_data.push_back(deactivate_count.get_name_leafdata());
    if (deactivate_error.is_set || is_set(deactivate_error.yfilter)) leaf_name_data.push_back(deactivate_error.get_name_leafdata());
    if (deactivate_last_error.is_set || is_set(deactivate_last_error.yfilter)) leaf_name_data.push_back(deactivate_last_error.get_name_leafdata());
    if (socket_set.is_set || is_set(socket_set.yfilter)) leaf_name_data.push_back(socket_set.get_name_leafdata());
    if (socket_set_error.is_set || is_set(socket_set_error.yfilter)) leaf_name_data.push_back(socket_set_error.get_name_leafdata());
    if (sock_set_last_error.is_set || is_set(sock_set_last_error.yfilter)) leaf_name_data.push_back(sock_set_last_error.get_name_leafdata());
    if (raw_packet_in.is_set || is_set(raw_packet_in.yfilter)) leaf_name_data.push_back(raw_packet_in.get_name_leafdata());
    if (raw_packet_in_error.is_set || is_set(raw_packet_in_error.yfilter)) leaf_name_data.push_back(raw_packet_in_error.get_name_leafdata());
    if (raw_packet_in_last_error.is_set || is_set(raw_packet_in_last_error.yfilter)) leaf_name_data.push_back(raw_packet_in_last_error.get_name_leafdata());
    if (raw_packet_out.is_set || is_set(raw_packet_out.yfilter)) leaf_name_data.push_back(raw_packet_out.get_name_leafdata());
    if (raw_packet_out_error.is_set || is_set(raw_packet_out_error.yfilter)) leaf_name_data.push_back(raw_packet_out_error.get_name_leafdata());
    if (raw_packet_out_last_error.is_set || is_set(raw_packet_out_last_error.yfilter)) leaf_name_data.push_back(raw_packet_out_last_error.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-interface-count")
    {
        configured_interface_count = value;
        configured_interface_count.value_namespace = name_space;
        configured_interface_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-interfaces-count")
    {
        active_interfaces_count = value;
        active_interfaces_count.value_namespace = name_space;
        active_interfaces_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "activate-count")
    {
        activate_count = value;
        activate_count.value_namespace = name_space;
        activate_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "activate-error")
    {
        activate_error = value;
        activate_error.value_namespace = name_space;
        activate_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "activate-last-error")
    {
        activate_last_error = value;
        activate_last_error.value_namespace = name_space;
        activate_last_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deactivate-count")
    {
        deactivate_count = value;
        deactivate_count.value_namespace = name_space;
        deactivate_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deactivate-error")
    {
        deactivate_error = value;
        deactivate_error.value_namespace = name_space;
        deactivate_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deactivate-last-error")
    {
        deactivate_last_error = value;
        deactivate_last_error.value_namespace = name_space;
        deactivate_last_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "socket-set")
    {
        socket_set = value;
        socket_set.value_namespace = name_space;
        socket_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "socket-set-error")
    {
        socket_set_error = value;
        socket_set_error.value_namespace = name_space;
        socket_set_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sock-set-last-error")
    {
        sock_set_last_error = value;
        sock_set_last_error.value_namespace = name_space;
        sock_set_last_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "raw-packet-in")
    {
        raw_packet_in = value;
        raw_packet_in.value_namespace = name_space;
        raw_packet_in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "raw-packet-in-error")
    {
        raw_packet_in_error = value;
        raw_packet_in_error.value_namespace = name_space;
        raw_packet_in_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "raw-packet-in-last-error")
    {
        raw_packet_in_last_error = value;
        raw_packet_in_last_error.value_namespace = name_space;
        raw_packet_in_last_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "raw-packet-out")
    {
        raw_packet_out = value;
        raw_packet_out.value_namespace = name_space;
        raw_packet_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "raw-packet-out-error")
    {
        raw_packet_out_error = value;
        raw_packet_out_error.value_namespace = name_space;
        raw_packet_out_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "raw-packet-out-last-error")
    {
        raw_packet_out_last_error = value;
        raw_packet_out_last_error.value_namespace = name_space;
        raw_packet_out_last_error.value_namespace_prefix = name_space_prefix;
    }
}

void Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
    if(value_path == "configured-interface-count")
    {
        configured_interface_count.yfilter = yfilter;
    }
    if(value_path == "active-interfaces-count")
    {
        active_interfaces_count.yfilter = yfilter;
    }
    if(value_path == "activate-count")
    {
        activate_count.yfilter = yfilter;
    }
    if(value_path == "activate-error")
    {
        activate_error.yfilter = yfilter;
    }
    if(value_path == "activate-last-error")
    {
        activate_last_error.yfilter = yfilter;
    }
    if(value_path == "deactivate-count")
    {
        deactivate_count.yfilter = yfilter;
    }
    if(value_path == "deactivate-error")
    {
        deactivate_error.yfilter = yfilter;
    }
    if(value_path == "deactivate-last-error")
    {
        deactivate_last_error.yfilter = yfilter;
    }
    if(value_path == "socket-set")
    {
        socket_set.yfilter = yfilter;
    }
    if(value_path == "socket-set-error")
    {
        socket_set_error.yfilter = yfilter;
    }
    if(value_path == "sock-set-last-error")
    {
        sock_set_last_error.yfilter = yfilter;
    }
    if(value_path == "raw-packet-in")
    {
        raw_packet_in.yfilter = yfilter;
    }
    if(value_path == "raw-packet-in-error")
    {
        raw_packet_in_error.yfilter = yfilter;
    }
    if(value_path == "raw-packet-in-last-error")
    {
        raw_packet_in_last_error.yfilter = yfilter;
    }
    if(value_path == "raw-packet-out")
    {
        raw_packet_out.yfilter = yfilter;
    }
    if(value_path == "raw-packet-out-error")
    {
        raw_packet_out_error.yfilter = yfilter;
    }
    if(value_path == "raw-packet-out-last-error")
    {
        raw_packet_out_last_error.yfilter = yfilter;
    }
}

bool Eigrp::Processes::Process::Vrfs::Vrf::Afs::Af::Ases::As::EigrpStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi" || name == "as-number" || name == "configured-interface-count" || name == "active-interfaces-count" || name == "activate-count" || name == "activate-error" || name == "activate-last-error" || name == "deactivate-count" || name == "deactivate-error" || name == "deactivate-last-error" || name == "socket-set" || name == "socket-set-error" || name == "sock-set-last-error" || name == "raw-packet-in" || name == "raw-packet-in-error" || name == "raw-packet-in-last-error" || name == "raw-packet-out" || name == "raw-packet-out-error" || name == "raw-packet-out-last-error")
        return true;
    return false;
}

const Enum::YLeaf EigrpBdSoo::none {0, "none"};
const Enum::YLeaf EigrpBdSoo::as {1, "as"};
const Enum::YLeaf EigrpBdSoo::ipv4_address {2, "ipv4-address"};
const Enum::YLeaf EigrpBdSoo::four_byte_as {3, "four-byte-as"};

const Enum::YLeaf EigrpBdPathRibState::active_path {0, "active-path"};
const Enum::YLeaf EigrpBdPathRibState::backup_path {1, "backup-path"};
const Enum::YLeaf EigrpBdPathRibState::path_sent_to_rib {2, "path-sent-to-rib"};
const Enum::YLeaf EigrpBdPathRibState::path_not_selected {3, "path-not-selected"};
const Enum::YLeaf EigrpBdPathRibState::error_state {4, "error-state"};

const Enum::YLeaf EigrpBdDelayUnit::none {0, "none"};
const Enum::YLeaf EigrpBdDelayUnit::ten_microsecond {1, "ten-microsecond"};
const Enum::YLeaf EigrpBdDelayUnit::picosecond {2, "picosecond"};
const Enum::YLeaf EigrpBdDelayUnit::microsecond {3, "microsecond"};

const Enum::YLeaf EigrpBdPathOrigin::connected {0, "connected"};
const Enum::YLeaf EigrpBdPathOrigin::static_redistributed {1, "static-redistributed"};
const Enum::YLeaf EigrpBdPathOrigin::connected_redistributed {2, "connected-redistributed"};
const Enum::YLeaf EigrpBdPathOrigin::subscriber_redistributed {3, "subscriber-redistributed"};
const Enum::YLeaf EigrpBdPathOrigin::redistributed {4, "redistributed"};
const Enum::YLeaf EigrpBdPathOrigin::vpnv4_sourced {5, "vpnv4-sourced"};
const Enum::YLeaf EigrpBdPathOrigin::vpnv6_sourced {6, "vpnv6-sourced"};
const Enum::YLeaf EigrpBdPathOrigin::summary {7, "summary"};
const Enum::YLeaf EigrpBdPathOrigin::dummy {8, "dummy"};
const Enum::YLeaf EigrpBdPathOrigin::eigrp_destination {9, "eigrp-destination"};
const Enum::YLeaf EigrpBdPathOrigin::origin_count {10, "origin-count"};

const Enum::YLeaf EigrpBdPathSendFlag::no_send_pending {0, "no-send-pending"};
const Enum::YLeaf EigrpBdPathSendFlag::multicast_update_pending {1, "multicast-update-pending"};
const Enum::YLeaf EigrpBdPathSendFlag::multicast_query_pending {2, "multicast-query-pending"};
const Enum::YLeaf EigrpBdPathSendFlag::reply_pending {3, "reply-pending"};
const Enum::YLeaf EigrpBdPathSendFlag::sia_query_pending {4, "sia-query-pending"};
const Enum::YLeaf EigrpBdPathSendFlag::sia_reply_pending {5, "sia-reply-pending"};

const Enum::YLeaf EigrpBdMetricVersion::metric_version32_bit {0, "metric-version32-bit"};
const Enum::YLeaf EigrpBdMetricVersion::metric_version64_bit {1, "metric-version64-bit"};


}
}

